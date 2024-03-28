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
 * Phone_RequestCompoundV2.h
 *
 * A Phone Object and children to create a complete structure
 */

#ifndef Phone_RequestCompoundV2_H
#define Phone_RequestCompoundV2_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Phone_RequestCompoundV2 : public Object {
public:
    Phone_RequestCompoundV2();
    Phone_RequestCompoundV2(QString json);
    ~Phone_RequestCompoundV2() override;

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

    QString m_s_phone_extension;
    bool m_s_phone_extension_isSet;
    bool m_s_phone_extension_isValid;

    QString m_s_phone_e164;
    bool m_s_phone_e164_isSet;
    bool m_s_phone_e164_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Phone_RequestCompoundV2)

#endif // Phone_RequestCompoundV2_H
