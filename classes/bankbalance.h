#ifndef BANKBALANCE_H
#define BANKBALANCE_H


class BankBalance
{
//! values
/*! private values for bank balance. */
private:
    double balance; /*!< double value for bank balance */
//! Public slots - functions
public:
    //! Construtor with parameters
    BankBalance(double balance);
    //! Empty Construtor
    BankBalance();
    //! Destrutor
    ~BankBalance();
    //! getBankBalance function with double return value
    /*! returns the value of variable bank balance */
    double getBankBalance();
    //! setBankBalance function with void return value and double parameter value
    /*! gives the variable bank balance the value in the parameter */
    void setBankBalance(double balance);
};

#endif // BANKBALANCE_H
