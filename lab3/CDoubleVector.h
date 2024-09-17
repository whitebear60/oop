//
// Created by Mykhailo Yaremenko on 17/09/24.
//

#ifndef CDOUBLEVECTOR_H
#define CDOUBLEVECTOR_H



class CDoubleVector {
  private:
    double* data;
    int size;
    void init(int size);
  public:
    CDoubleVector();
    CDoubleVector(int size);
    CDoubleVector(const CDoubleVector& data);
    ~CDoubleVector();
    int getSize() const;
    void clear();
    double get(int index) const;
    void set(int index, double value);
    double avg() const;
    double max() const;
    double min() const;
    double calculate() const;

};



#endif //CDOUBLEVECTOR_H
