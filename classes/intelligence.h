#ifndef INTELLIGENCE_H
#define INTELLIGENCE_H


class Intelligence
{
//! values
/*! private values for intelligence. */
private:
    int rate; /*!< int value for rate of intelligence */
    int amount; /*!< int value for amount of intelligence left */
    bool active; /*!< bool value for activation of intelligence */
public:
    //! Empty Construtor
    Intelligence();
    //! Empty Construtor
    ~Intelligence();
    //! setRateIntelligence function with void return value and double parameter value
    /*! gives the variable intelligence_rate the value in the parameter */
    void setRateIntelligence(int newRate);
    //! setAmountIntelligence function with void return value and double parameter value
    /*! gives the variable intelligence_amount the value in the parameter */
    void setAmountIntelligence(int newAmount);
    //! getRateIntelligence function with double return value
    /*! returns the value of variable intelligence_rate */
    int getRateIntelligence();
    //! getAmountIntelligence function with double return value
    /*! returns the value of variable intelligence_amount */
    int getAmountIntelligence();
    //! isActiveIntelligence function with bool return value
    /*! returns if the Intelligence is active or not */
    bool isActiveIntelligence();
    //! setActiveIntelligence function with void return value
    /*! activates or not the intelligence */
    void setActiveIntelligence(bool);
};

#endif // INTELLIGENCE_H
