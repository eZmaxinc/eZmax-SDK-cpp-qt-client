/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIPhone_Response.h
 *
 * A Phone Object
 */

#ifndef OAIPhone_Response_H
#define OAIPhone_Response_H

#include <QJsonObject>

#include "OAIField_ePhoneType.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIPhone_Response : public OAIObject {
public:
    OAIPhone_Response();
    OAIPhone_Response(QString json);
    ~OAIPhone_Response() override;

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

    Q_DECL_DEPRECATED OAIField_ePhoneType getEPhoneType() const;
    Q_DECL_DEPRECATED void setEPhoneType(const OAIField_ePhoneType &e_phone_type);
    Q_DECL_DEPRECATED bool is_e_phone_type_Set() const;
    Q_DECL_DEPRECATED bool is_e_phone_type_Valid() const;

    QString getSPhoneE164() const;
    void setSPhoneE164(const QString &s_phone_e164);
    bool is_s_phone_e164_Set() const;
    bool is_s_phone_e164_Valid() const;

    QString getSPhoneExtension() const;
    void setSPhoneExtension(const QString &s_phone_extension);
    bool is_s_phone_extension_Set() const;
    bool is_s_phone_extension_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_phone_id;
    bool m_pki_phone_id_isSet;
    bool m_pki_phone_id_isValid;

    qint32 fki_phonetype_id;
    bool m_fki_phonetype_id_isSet;
    bool m_fki_phonetype_id_isValid;

    OAIField_ePhoneType e_phone_type;
    bool m_e_phone_type_isSet;
    bool m_e_phone_type_isValid;

    QString s_phone_e164;
    bool m_s_phone_e164_isSet;
    bool m_s_phone_e164_isValid;

    QString s_phone_extension;
    bool m_s_phone_extension_isSet;
    bool m_s_phone_extension_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPhone_Response)

#endif // OAIPhone_Response_H
