/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Multilingual_PaymenttermDescription.h
 *
 * Description of the Paymentterm
 */

#ifndef Multilingual_PaymenttermDescription_H
#define Multilingual_PaymenttermDescription_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Multilingual_PaymenttermDescription : public Object {
public:
    Multilingual_PaymenttermDescription();
    Multilingual_PaymenttermDescription(QString json);
    ~Multilingual_PaymenttermDescription() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSPaymenttermDescription1() const;
    void setSPaymenttermDescription1(const QString &s_paymentterm_description1);
    bool is_s_paymentterm_description1_Set() const;
    bool is_s_paymentterm_description1_Valid() const;

    QString getSPaymenttermDescription2() const;
    void setSPaymenttermDescription2(const QString &s_paymentterm_description2);
    bool is_s_paymentterm_description2_Set() const;
    bool is_s_paymentterm_description2_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_paymentterm_description1;
    bool m_s_paymentterm_description1_isSet;
    bool m_s_paymentterm_description1_isValid;

    QString m_s_paymentterm_description2;
    bool m_s_paymentterm_description2_isSet;
    bool m_s_paymentterm_description2_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Multilingual_PaymenttermDescription)

#endif // Multilingual_PaymenttermDescription_H