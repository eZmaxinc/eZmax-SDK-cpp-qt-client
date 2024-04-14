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
 * Period_AutocompleteElement_Response.h
 *
 * A Period AutocompleteElement Response
 */

#ifndef Period_AutocompleteElement_Response_H
#define Period_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Period_AutocompleteElement_Response : public Object {
public:
    Period_AutocompleteElement_Response();
    Period_AutocompleteElement_Response(QString json);
    ~Period_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSPeriodYyyymm() const;
    void setSPeriodYyyymm(const QString &s_period_yyyymm);
    bool is_s_period_yyyymm_Set() const;
    bool is_s_period_yyyymm_Valid() const;

    qint32 getPkiPeriodId() const;
    void setPkiPeriodId(const qint32 &pki_period_id);
    bool is_pki_period_id_Set() const;
    bool is_pki_period_id_Valid() const;

    bool isBPeriodIsactive() const;
    void setBPeriodIsactive(const bool &b_period_isactive);
    bool is_b_period_isactive_Set() const;
    bool is_b_period_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_period_yyyymm;
    bool m_s_period_yyyymm_isSet;
    bool m_s_period_yyyymm_isValid;

    qint32 m_pki_period_id;
    bool m_pki_period_id_isSet;
    bool m_pki_period_id_isValid;

    bool m_b_period_isactive;
    bool m_b_period_isactive_isSet;
    bool m_b_period_isactive_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Period_AutocompleteElement_Response)

#endif // Period_AutocompleteElement_Response_H