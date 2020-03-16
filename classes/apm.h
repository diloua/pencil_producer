#ifndef APM_H
#define APM_H

//! An APM2000 class.
/*!
 This class contains all the variables and functions related to APM2000.
 There are public slots and values are private.
*/

class APM
{
private:
    int number; /*!< int value for number of apm2000s bought */
    double price; /*!< double value for apm2000 costs */
    double rate; /*!< double value for rate of apm2000 */
public:
    //! Empty Construtor
    APM();
    //! Destrutor
    ~APM();
    //! setNumberAPM function with void return value and int parameter value
    /*! gives the variable num_apm2000 (APM2000s bought) the value in the parameter */
    void setNumberAPM(int no);
    //! getNumberAPM function with int return value
    /*! returns the value of variable num_apm2000 (APM2000s bought) */
    int getNumberAPM();
    //! setPriceAPM function with void return value and double parameter value
    /*! gives the variable apm2000_cost (price of APM2000s) the value in the parameter */
    void setPriceAPM(float price);
    //! getPriceAPM function with double return value
    /*! returns the value of variable apm2000_cost (price of APM2000s) */
    double getPriceAPM();
    //! setRateAPM function with void return value and int parameter value
    /*! gives the variable apm2000_rate (nr of pencils APM2000s produce in 1 second)
        the value in the parameter */
    void setRateAPM(double rate);
    //! getRateAPM function with int return value
    /*! returns the value of variable apm2000_rate
        (nr of pencils APM2000s produce in 1 second)*/
    double getRateAPM();
};

#endif // APM_H
