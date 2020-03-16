#ifndef MARKETING_H
#define MARKETING_H


class Marketing
{

//! values
//! /*! private values for marketing. */
private:
    double price; /*!< double value for price of marketing */
    int quantity; /*!< int value for quantity of marketing */
public:
    //! Empty Construtor
    Marketing();
    //! Destrutor
    ~Marketing();
    //! getMarketingPrice function with double return value
    /*! returns the value of variable marketing_price */
    double getMarketingPrice();
    //! setMarketingPrice function with void return value and double parameter value
    /*! gives the variable marketing_price the value in the parameter */
    void setMarketingPrice(double price);
    //! getMarketingQuantity function with int return value
    /*! returns the value of variable quantity */
    int getMarketingQuantity();
    //! setMarketingQuantity function with void return value and int parameter value
    /*! gives the variable marketing_amount the value in the parameter */
    void setMarketingQuantity(int quantity);
    
    int is_unlock; /*!< boolean of whether the feature has been unlocked */
};

#endif // MARKETING_H
