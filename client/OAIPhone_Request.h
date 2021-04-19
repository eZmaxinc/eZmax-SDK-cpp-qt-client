/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.40
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIPhone_Request.h
 *
 * A Phone Object
 */

#ifndef OAIPhone_Request_H
#define OAIPhone_Request_H

#include <QJsonObject>

#include "OAIField_ePhoneType.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIPhone_Request : public OAIObject {
public:
    OAIPhone_Request();
    OAIPhone_Request(QString json);
    ~OAIPhone_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiPhonetypeId() const;
    void setFkiPhonetypeId(const qint32 &fki_phonetype_id);
    bool is_fki_phonetype_id_Set() const;
    bool is_fki_phonetype_id_Valid() const;

    OAIField_ePhoneType getEPhoneType() const;
    void setEPhoneType(const OAIField_ePhoneType &e_phone_type);
    bool is_e_phone_type_Set() const;
    bool is_e_phone_type_Valid() const;

    QString getSPhoneRegion() const;
    void setSPhoneRegion(const QString &s_phone_region);
    bool is_s_phone_region_Set() const;
    bool is_s_phone_region_Valid() const;

    QString getSPhoneExchange() const;
    void setSPhoneExchange(const QString &s_phone_exchange);
    bool is_s_phone_exchange_Set() const;
    bool is_s_phone_exchange_Valid() const;

    QString getSPhoneNumber() const;
    void setSPhoneNumber(const QString &s_phone_number);
    bool is_s_phone_number_Set() const;
    bool is_s_phone_number_Valid() const;

    QString getSPhoneInternational() const;
    void setSPhoneInternational(const QString &s_phone_international);
    bool is_s_phone_international_Set() const;
    bool is_s_phone_international_Valid() const;

    QString getSPhoneExtension() const;
    void setSPhoneExtension(const QString &s_phone_extension);
    bool is_s_phone_extension_Set() const;
    bool is_s_phone_extension_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 fki_phonetype_id;
    bool m_fki_phonetype_id_isSet;
    bool m_fki_phonetype_id_isValid;

    OAIField_ePhoneType e_phone_type;
    bool m_e_phone_type_isSet;
    bool m_e_phone_type_isValid;

    QString s_phone_region;
    bool m_s_phone_region_isSet;
    bool m_s_phone_region_isValid;

    QString s_phone_exchange;
    bool m_s_phone_exchange_isSet;
    bool m_s_phone_exchange_isValid;

    QString s_phone_number;
    bool m_s_phone_number_isSet;
    bool m_s_phone_number_isValid;

    QString s_phone_international;
    bool m_s_phone_international_isSet;
    bool m_s_phone_international_isValid;

    QString s_phone_extension;
    bool m_s_phone_extension_isSet;
    bool m_s_phone_extension_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPhone_Request)

#endif // OAIPhone_Request_H
