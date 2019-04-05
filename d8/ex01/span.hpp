#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span {

    public: 

        Span(void);
        Span(unsigned int);
        Span(Span const & src);
        ~Span(void);

        Span &		operator=(Span const & rhs);

        std::string const	toString(void) const;
        void                addNumber(int);
        int                 shortestSpan();
        int                 longestSpan();
        int                 operator[](unsigned int n) const;

    private:

        unsigned int        _size;
        std::vector<int>    _array;

};

std::ostream &	operator<< (std::ostream & o, Span const & rhs);

#endif