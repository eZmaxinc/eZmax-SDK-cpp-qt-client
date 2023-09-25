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
 * OAIEzmaxinvoicing_AutocompleteElement_Response.h
 *
 * A Ezmaxinvoicing AutocompleteElement Response
 */

#ifndef OAIEzmaxinvoicing_AutocompleteElement_Response_H
#define OAIEzmaxinvoicing_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {

class OAIEzmaxinvoicing_AutocompleteElement_Response : public OAIObject {
public:
    OAIEzmaxinvoicing_AutocompleteElement_Response();
    OAIEzmaxinvoicing_AutocompleteElement_Response(QString json);
    ~OAIEzmaxinvoicing_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getYyyymmEzmaxinvoicing() const;
    void setYyyymmEzmaxinvoicing(const QString &yyyymm_ezmaxinvoicing);
    bool is_yyyymm_ezmaxinvoicing_Set() const;
    bool is_yyyymm_ezmaxinvoicing_Valid() const;

    qint32 getPkiEzmaxinvoicingId() const;
    void setPkiEzmaxinvoicingId(const qint32 &pki_ezmaxinvoicing_id);
    bool is_pki_ezmaxinvoicing_id_Set() const;
    bool is_pki_ezmaxinvoicing_id_Valid() const;

    bool isBEzmaxinvoicingIsactive() const;
    void setBEzmaxinvoicingIsactive(const bool &b_ezmaxinvoicing_isactive);
    bool is_b_ezmaxinvoicing_isactive_Set() const;
    bool is_b_ezmaxinvoicing_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_yyyymm_ezmaxinvoicing;
    bool m_yyyymm_ezmaxinvoicing_isSet;
    bool m_yyyymm_ezmaxinvoicing_isValid;

    qint32 m_pki_ezmaxinvoicing_id;
    bool m_pki_ezmaxinvoicing_id_isSet;
    bool m_pki_ezmaxinvoicing_id_isValid;

    bool m_b_ezmaxinvoicing_isactive;
    bool m_b_ezmaxinvoicing_isactive_isSet;
    bool m_b_ezmaxinvoicing_isactive_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIEzmaxinvoicing_AutocompleteElement_Response)

#endif // OAIEzmaxinvoicing_AutocompleteElement_Response_H
