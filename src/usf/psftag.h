/////////////////////////////////////////////////////////////////////////////
//
// tag handling
//
/////////////////////////////////////////////////////////////////////////////

#ifndef __PSF_PSFTAG_H__
#define __PSF_PSFTAG_H__
    
#ifdef __cplusplus
extern "C" {
    
#endif	/* 
    
    
    
    
    
    
//
// Retrieve a tag variable.
// Guarantees null termination of output.
// Returns 0 if the variable was found
// Otherwise, returns -1 and sets the output to an empty terminated string
//
    int psftag_getvar(void *psftag, const char *variable, char *value_out,
		      int value_out_size);
    
//
// Set a tag variable.
//
    void psftag_setvar(void *psftag, const char *variable,
		       const char *value);
    
    
    
//
// Retrieve a tag variable. The input tag data must be null-terminated.
// Guarantees null termination of output.
// Returns 0 if the variable was found
// Otherwise, returns -1 and sets the output to an empty terminated string
//
    int psftag_raw_getvar(const char *tag, const char *variable,
			  char *value_out, int value_out_size);
    
//
// Set a tag variable.
// Provide the maximum growable tag size _including_ space for the null terminator.
// Note that this function assumes it can overwrite *tag up to the length of the
// existing string, regardless of tag_max_size.
//
    void psftag_raw_setvar(char *tag, int tag_max_size,
			   const char *variable, const char *value);
    
#ifdef __cplusplus
} 
#endif	/* 

#endif	/* 