/* 
Program to read a string from a file and write the same string to a new file 
*/ 

#include <stdio.h> 

#define MAX_CHARS 81

int main() 
{ 
    //Create a file pointer 
    FILE *fp_in, *fp_out;
    
    // Array to store the string from the file 
    char one_line[MAX_CHARS]; 
    
    //Open the file called file.txt for reading 
    //and check if this is successful 
    if ( (fp_in = fopen("file.txt", "r")) == NULL ) 
    { 
        printf("\nError opening file"); 
        
        // end program immediately
        return 0;
        
    } // end if 
    else if( (fp_out = fopen("new.txt", "w") ) != NULL ) 
    { 
        /* 
        Read at most:
        (i) MAX_CHARS - 1 characters from the file 
        or
        (ii) until a new line character is read
        or
        (iii) the end of the file is reached.
        
        Write the string to a new file called "new.txt" 
        */ 

        // fseek(fp_in, 20, SEEK_CUR);
        
        while( fgets(one_line, MAX_CHARS - 1, fp_in) != NULL) 
        {
            // Used simply to display the copied string to standard output, which has been written to new.txt 
            fputs(one_line, fp_out); 
            
            ///printf("%s", one_line); 
    
        } // end while 

        printf("Copying complete\n");
    
        // Close the file once finished 
        fclose(fp_in); 
        fclose(fp_out); 
    
        } // end else if 
        else 
        { 
            printf("\nError opening/writing to new file"); 
        
        } // end else 

    return 0; 

} // end main()