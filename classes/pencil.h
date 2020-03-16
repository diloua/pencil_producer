#ifndef PENCIL_H
#define PENCIL_H


class Pencil
{
//! values
/*! private values for pencil. */
private:
    int produced; /*!< int value for total number of pencil produced since start. */
    int quantity; /*!< int value for number of pencil in inventory. */
    double price; /*!< double value for price of pencil. */
    double rate; /*!< double value 1 / pencil_price */

public:
    //! Construtor with parameters
    Pencil(double amount, double price);
    //! Empty Construtor
    Pencil();
    //! Destrutor
    ~Pencil();
    void increasePencilPrice();
    void decreasePencilPrice();
    //! getPencilQuantity function with int return value
    /*! returns the value of variable count (pencils in inventory) */
    int getPencilQuantity();
    //! setPencilQuantity function with void return value and int parameter value
    /*! gives the variable count (pencils in inventory) the value in the parameter */
    void setPencilQuantity(int quantity);
    //! set_pencil_price function with void return value and double parameter value
    /*! gives the variable pencil_price (price of pencils) the value in the parameter */
    void setPencilPrice(double price);
    //! get_pencil_price function with double return value
    /*! returns the value of variable pencil_price (price of pencils) */
    double getPencilPrice();
    //! set_rate function with void return value and double parameter value
    /*! gives the variable rate (rate of selling pencils) the value in the parameter */
    void setPencilRate(double rate);
    //! get_rate function with double return value
    /*! returns the value of variable rate (rate of selling pencils) */
    double getPencilRate();
    //! get_total function with int return value
    /*! returns the value of variable total (pencils produced) */
    int getPencilProduced();
    //! set_total function with void return value and int parameter value
    /*! gives the variable total (pencils produced) the value in the parameter */
    void setPencilProduced(int produced);
};

#endif // PENCIL_H
