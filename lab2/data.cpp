//
// Created by Mykhailo Yaremenko on 03/09/24.
//

#include "data.h"


CData::CData() {

    CData::m_a = 0;
}

CData::CData(const double v) {
    CData::m_a = v;
}

CData::CData(const CData &v) {
    CData::m_a = v.m_a;
}

double CData::getA() const {
    return CData::m_a;
}

void CData::setA(double a) {
    CData::m_a = a;
}

bool CData::checkA(const double min, const double max) const {
    if (m_a < min || m_a > max) {
        return false;
    }
    return true;
}

CData::~CData() {
    delete &m_a;
}
