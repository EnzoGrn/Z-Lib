/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** write functions - header
*/

#ifndef ZWRITE_H_
    #define ZWRITE_H_

    #include <zlib/zctype.h>

    ////////////////////////////////////////////////////////////
    /// \brief Write a char in the standard output
    ///
    /// \param c char to write
    ///
    ////////////////////////////////////////////////////////////
    void zputchar(char c);

    ////////////////////////////////////////////////////////////
    /// \brief Write a string in the standard output
    ///
    /// \param str string to write
    ///
    /// \return 0
    ///
    ////////////////////////////////////////////////////////////
    int zputstr(char const *str);

    ////////////////////////////////////////////////////////////
    /// \brief Write a int number in the standard output
    ///
    /// \param nbr number to write
    ///
    /// \return 0
    ///
    ////////////////////////////////////////////////////////////
    void zputnbr(int nbr);

    ////////////////////////////////////////////////////////////
    /// \brief Write a long number in the standard output
    ///
    /// \param nbr number to write
    ///
    /// \return 0
    ///
    ////////////////////////////////////////////////////////////
    void zputlong(long nbr);

    ////////////////////////////////////////////////////////////
    /// \brief Write a string in the error output
    ///
    /// \param str string to write
    ///
    /// \return 1
    ///
    ////////////////////////////////////////////////////////////
    int zperror(char const *str);

    ////////////////////////////////////////////////////////////
    /// \brief Write a string in an output choosen by the user
    ///
    /// \param fd file descriptor of the output
    /// \param str string to write
    ///
    /// \return the return code of write()
    ///
    ////////////////////////////////////////////////////////////
    llong zwrite(int fd, char const *str);

#endif /* !ZWRITE_H_ */
