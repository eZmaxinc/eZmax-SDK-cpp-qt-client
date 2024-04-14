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
 * Phone_Request.h
 *
 * A Phone Object
 */

#ifndef Phone_Request_H
#define Phone_Request_H

#include <QJsonObject>

#include "Field_ePhoneType.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Phone_Request : public Object {
public:
    Phone_Request();
    Phone_Request(QString json);
    ~Phone_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiPhoneId() const;
    void setPkiPhoneId(const qint32 &pki_phone_id);
    bool is_pki_phone_id_Set() const;
    bool is_pki_phone_id_Valid() const;

    qint32 getFkiPhonetypeId() const;
    void setFkiPhonetypeId(const qint32 &fki_phonetype_id);
    bool is_fki_phonetype_id_Set() const;
    bool is_fki_phonetype_id_Valid() const;

    Q_DECL_DEPRECATED Field_ePhoneType getEPhoneType() const;
    Q_DECL_DEPRECATED void setEPhoneType(const Field_ePhoneType &e_phone_type);
    Q_DECL_DEPRECATED bool is_e_phone_type_Set() const;
    Q_DECL_DEPRECATED bool is_e_phone_type_Valid() const;

    Q_DECL_DEPRECATED QString getSPhoneRegion() const;
    Q_DECL_DEPRECATED void setSPhoneRegion(const QString &s_phone_region);
    Q_DECL_DEPRECATED bool is_s_phone_region_Set() const;
    Q_DECL_DEPRECATED bool is_s_phone_region_Valid() const;

    Q_DECL_DEPRECATED QString getSPhoneExchange() const;
    Q_DECL_DEPRECATED void setSPhoneExchange(const QString &s_phone_exchange);
    Q_DECL_DEPRECATED bool is_s_phone_exchange_Set() const;
    Q_DECL_DEPRECATED bool is_s_phone_exchange_Valid() const;

    Q_DECL_DEPRECATED QString getSPhoneNumber() const;
    Q_DECL_DEPRECATED void setSPhoneNumber(const QString &s_phone_number);
    Q_DECL_DEPRECATED bool is_s_phone_number_Set() const;
    Q_DECL_DEPRECATED bool is_s_phone_number_Valid() const;

    Q_DECL_DEPRECATED QString getSPhoneInternational() const;
    Q_DECL_DEPRECATED void setSPhoneInternational(const QString &s_phone_international);
    Q_DECL_DEPRECATED bool is_s_phone_international_Set() const;
    Q_DECL_DEPRECATED bool is_s_phone_international_Valid() const;

    QString getSPhoneExtension() const;
    void setSPhoneExtension(const QString &s_phone_extension);
    bool is_s_phone_extension_Set() const;
    bool is_s_phone_extension_Valid() const;

    QString getSPhoneE164() const;
    void setSPhoneE164(const QString &s_phone_e164);
    bool is_s_phone_e164_Set() const;
    bool is_s_phone_e164_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_phone_id;
    bool m_pki_phone_id_isSet;
    bool m_pki_phone_id_isValid;

    qint32 m_fki_phonetype_id;
    bool m_fki_phonetype_id_isSet;
    bool m_fki_phonetype_id_isValid;

    Field_ePhoneType m_e_phone_type;
    bool m_e_phone_type_isSet;
    bool m_e_phone_type_isValid;

    QString m_s_phone_region;
    bool m_s_phone_region_isSet;
    bool m_s_phone_region_isValid;

    QString m_s_phone_exchange;
    bool m_s_phone_exchange_isSet;
    bool m_s_phone_exchange_isValid;

    QString m_s_phone_number;
    bool m_s_phone_number_isSet;
    bool m_s_phone_number_isValid;

    QString m_s_phone_international;
    bool m_s_phone_international_isSet;
    bool m_s_phone_international_isValid;

    QString m_s_phone_extension;
    bool m_s_phone_extension_isSet;
    bool m_s_phone_extension_isValid;

    QString m_s_phone_e164;
    bool m_s_phone_e164_isSet;
    bool m_s_phone_e164_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Phone_Request)

#endif // Phone_Request_H