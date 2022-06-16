/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** mem functions - header
*/

#ifndef ZMEM_H_
    #define ZMEM_H_

    #include <zlib/zctype.h>

    ////////////////////////////////////////////////////////////
    /// \brief Allocate NMEMB elements of SIZE bytes each, all initialized to 0
    ///
    /// \param nmemb Type of memory block to allocate
    /// \param size Size of each element
    ///
    /// \return Pointer to the allocated memory block filled with 0
    ///
    ////////////////////////////////////////////////////////////
    void *zcalloc(ulong nmemb, ulong size);

    ////////////////////////////////////////////////////////////
    /// \brief Free a char array
    ///
    /// \param tab Char array to free
    ///
    ////////////////////////////////////////////////////////////
    void zfree_chararr(char **tab);

    ////////////////////////////////////////////////////////////
    /// \brief Free a int array
    ///
    /// \param ptr Char array to free
    ///
    ////////////////////////////////////////////////////////////
    void zfree_intarr(int **ptr, uint size);

    ////////////////////////////////////////////////////////////
    /// \brief Free a pointer
    ///
    /// \param ptr Pointer to the memory block to free
    ///
    ////////////////////////////////////////////////////////////
    void zfree(void *ptr);

    ////////////////////////////////////////////////////////////
    /// \brief Reallocate the given memory block
    ///
    /// \param ptr Pointer to the memory block to reallocate
    /// \param nmemb Type of new memory block to allocate
    /// \param size Size of new each element
    ///
    /// \return Pointer to the reallocated memory block
    ///
    ////////////////////////////////////////////////////////////
    void *zrealloc(void *ptr, ulong nmemb, ulong size, ulong newsize);

#endif /* !ZMEM_H_ */
