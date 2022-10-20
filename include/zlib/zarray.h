/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** array functions - header
*/

#ifndef ZARRAY_H_
    #define ZARRAY_H_

    #include <zlib/zctype.h>

    ////////////////////////////////////////////////////////////
    /// \brief Make a copy of a 2d array
    ///
    /// \param tab 2d array to copy
    ///
    /// \return The copy of tab
    ///
    ////////////////////////////////////////////////////////////
    char **zarrdup(char **tab);

    ////////////////////////////////////////////////////////////
    /// \brief Changes the size of a memory block of a 2d array
    ///
    /// \param tab 2d array to realloc
    ///
    /// \return The 2d array with it memory block + 1
    ///
    ////////////////////////////////////////////////////////////
    char **zarrealloc(char **tab);

    ////////////////////////////////////////////////////////////
    /// \brief Get the size of a 2d array
    ///
    /// \param tab 2d array to check
    ///
    /// \return Length of 2d array
    ///
    ////////////////////////////////////////////////////////////
    ulong zarrlen(char **tab);

    ////////////////////////////////////////////////////////////
    /// \brief Display a 2d array
    ///
    /// \param tab 2d array to display
    ///
    ////////////////////////////////////////////////////////////
    void zprintarr(char **tab);

    ////////////////////////////////////////////////////////////
    /// \brief Turn a string into an array
    ///
    /// \param str string to transform
    /// \param sep separator to transform
    ///
    /// \return Array of string
    ///
    ////////////////////////////////////////////////////////////
    char **zstr_to_array(char const *str, char const separator);

#endif /* !ZARRAY_H_ */
