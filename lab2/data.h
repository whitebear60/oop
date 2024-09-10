//
// Created by Mykhailo Yaremenko on 03/09/24.
//

#ifndef DATA_H
#define DATA_H


class CData {
    private:
        double m_a;
    public:
        CData();
        CData(double v);
        CData(const CData& v);
        double getA() const;
        void setA(double a);
        bool checkA(double min, double max) const;
        ~CData();

};



#endif //DATA_H
