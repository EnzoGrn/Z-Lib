/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** string functions - header
*/

#ifndef ZSTRING_H_
    #define ZSTRING_H_

    #include <zlib/zctype.h>

    ////////////////////////////////////////////////////////////
    /// \brief Count the number of occurences of a char in a string
    ///
    /// \param str String to check
    /// \param c Char to find
    ///
    /// \return Number of occurences of char c
    ///
    ////////////////////////////////////////////////////////////
    ulong zcount_occur(char *str, char c);

    ////////////////////////////////////////////////////////////
    /// \brief Check if a string contain a specific char
    ///
    /// \param str String to check
    /// \param c Char to find
    ///
    /// \return false if not contains the char, true otherwise
    ///
    ////////////////////////////////////////////////////////////
    bool zchar_in(char *str, char c);

    ////////////////////////////////////////////////////////////
    /// \brief Fill memory with a constant byte
    ///
    /// \param s Memory need to fill
    /// \param c Byte uses to fill
    /// \param n Number of byte need to fill
    ///
    /// \return The string fill with byte c
    ///
    ////////////////////////////////////////////////////////////
    void *zmemset(void *s, int c, ulong size);

    ////////////////////////////////////////////////////////////
    /// \brief Check if a string contain a specific char
    ///
    /// \param str String to check
    /// \param c Char to find
    ///
    /// \return false if not contains the char, true otherwise
    ///
    ////////////////////////////////////////////////////////////
    bool zstrchr(char *str, char const c);

    ////////////////////////////////////////////////////////////
    /// \brief Make a copy of a string
    ///
    /// \param str The original string
    ///
    /// \return The copied string
    ///
    ////////////////////////////////////////////////////////////
    char *zstrdup(char const *str);

    ////////////////////////////////////////////////////////////
    /// \brief Concat a string into an other string
    ///
    /// \param dest destination string
    /// \param src  source string
    ///
    /// \return Destination string with copied source string
    ///
    ////////////////////////////////////////////////////////////
    char *zstrcat(char *dest, char const *src);

    ////////////////////////////////////////////////////////////
    /// \brief Concat a string into an other string on n characters
    ///
    /// \param dest destination string
    /// \param src  source string
    /// \param nb   nb of characters to check
    ///
    /// \return Destination string with copied source string on n characters
    ///
    ////////////////////////////////////////////////////////////
    char *zstrncat(char *dest, char const *src, ulong nb);

    ////////////////////////////////////////////////////////////
    /// \brief Copy a string into an other string
    ///
    /// \param src  source string
    ///
    /// \return Destination string with copied source string
    ///
    ////////////////////////////////////////////////////////////
    char *zstrcpy(char *dest, char const *src);

    ////////////////////////////////////////////////////////////
    /// \brief Copy firsts characters of a string into an other string
    ///
    /// \param dest destination string
    /// \param src  source string
    /// \param n    number of characters to copy
    ///
    /// \return Destination string with copied source string
    ///
    ////////////////////////////////////////////////////////////
    char *zstrncpy(char *dest, char const *src, ulong n);

    ////////////////////////////////////////////////////////////
    /// \brief Reverse a string
    ///
    /// \param str string to reverse
    ///
    /// \return String reverse
    ///
    ////////////////////////////////////////////////////////////
    char *zrevstr(char *str);

    ////////////////////////////////////////////////////////////
    /// \brief Find a string into an other string
    ///
    /// \param str      base string
    /// \param to_find  string to find
    ///
    /// \return NULL if not found, string from to_find otherwise
    ///
    ////////////////////////////////////////////////////////////
    bool zstrstr(char *str, char const *to_find);

    ////////////////////////////////////////////////////////////
    /// \brief Compare two string
    ///
    /// \param s1 string to check
    /// \param s2 string to check
    ///
    /// \return 0 if equal, difference between otherwise
    ///
    ////////////////////////////////////////////////////////////
    int zstrcmp(char const *s1, char const *s2);

    ////////////////////////////////////////////////////////////
    /// \brief Compare firsts characters of two string
    ///
    /// \param s1 string to check
    /// \param s2 string to check
    /// \param n  number of characters to compare
    ///
    /// \return 0 if equal, difference between otherwise
    ///
    ////////////////////////////////////////////////////////////
    int zstrncmp(char const *s1, char const *s2, ulong n);

    ////////////////////////////////////////////////////////////
    /// \brief Set a string to upper case
    ///
    /// \param str Base string
    ///
    /// \return String set to upper case
    ///
    ////////////////////////////////////////////////////////////
    char *zstrcapitalize(char *str);

    ////////////////////////////////////////////////////////////
    /// \brief Get the lenth of a string
    ///
    /// \param str String to check
    ///
    /// \return Length of the string
    ///
    ////////////////////////////////////////////////////////////
    ulong zstrlen(char const *str);

    ////////////////////////////////////////////////////////////
    /// \brief Convert the string argument STR to an integer (type int)
    ///
    /// \param str String to convert
    ///
    /// \return The integer value of the string
    ///
    ////////////////////////////////////////////////////////////
    int zatoi(char const *str);

    ////////////////////////////////////////////////////////////
    /// \brief Convert integer to string
    ///
    /// \param nbr Integer to convert
    ///
    /// \return The string value of the integer
    ///
    ////////////////////////////////////////////////////////////
    char *zitoa(llong nbr);

    ////////////////////////////////////////////////////////////
    /// \brief Concat a char into an other string
    ///
    /// \param dest Destination string
    /// \param c  Char to concat
    ///
    /// \return Destination string with copied char
    ///
    ////////////////////////////////////////////////////////////
    char *zstrcatchar(char *dest, char const c);

// ulong ostrlensep(char const *str, char const separator);

void *zmemcpy(void *dest, const void *src, ulong size);

// bool ostr_end_with(char const *src, char const *end);

#endif /* !ZSTRING_H_ */
