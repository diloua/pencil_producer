#ifndef WOOD_H
#define WOOD_H


class Wood
{
private:
    double amount; /*!< double value for amount of wood */
    double price; /*!< double value for price of wood. */
//! Public slots - functions
public:
    //! Construtor with parameters
    Wood(double amount, double price);
    //! Destrutor
    ~Wood();
    //! Empty Construtor
    Wood();
    //! increase_wood_amount function with void return value
    /*! increase amount_wood by 100 (default amount is 1000) */
    void increaseWood();
    //! decrease_wood_amount function with void return value and double parameter value
    /*! decrease amount_wood by 0.21*rate (default amount is 1000) */
    void decreaseWood();
    //! get_amount_wood function with double return value
    /*! returns the value of variable amount_wood (amount of wood left) */
    double getAmountWood();
    //! set_amount_wood function with void return value and double parameter value
    /*! gives the variable amount_wood (amount of wood left) the value in the parameter */
    void setAmountWood(double amount);
    //! set_price_wood function with void return value and double parameter value
    /*! gives the variable price_wood (price of wood) the value in the parameter */
    void setPriceWood(double price);
    //! get_price_wood function with double return value
    /*! returns the value of variable price_wood (price of wood) */
    double getPriceWood();
};

#endif // WOOD_H
