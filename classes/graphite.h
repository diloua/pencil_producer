#ifndef GRAPHITE_H
#define GRAPHITE_H


class Graphite
{
    private:
        double amount; /*!< double value for amount of graphite */
        double price; /*!< double value for price of graphite. */
    //! Public functions
    public:
        //! Construtor with parameters
        Graphite(double amount, double price);
        //! Empty Construtor
        Graphite();
        //! Destrutor
        ~Graphite();
        //! increaseGraphite function with void return value
        /*! increase amount_graphite by 100 (default amount is 1000) */
        void increaseGraphite();
        //! decreaseGraphite function with void return value
        /*! decrease amount_graphite by 0.2*rate (default amount is 1000) */
        void decreaseGraphite();
        //! getAmountGraphite function with double return value
        /*! returns the value of variable amount_graphite (amount of graphite left) */
        double getAmountGraphite();
        //! getPriceGraphite function with double return value
        /*! returns the value of variable price_graphite (price of graphite) */
        double getPriceGraphite();
        //! setAmountGraphite function with void return value and double parameter value
        /*! gives the variable amount_graphite (amount of graphite left) the value in the parameter */
        void setAmountGraphite(double amount);
        //! setPriceGraphite function with void return value and double parameter value
        /*! gives the variable price_graphite (price of graphite) the value in the parameter */
        void setPriceGraphite(double price);
};

#endif // GRAPHITE_H
