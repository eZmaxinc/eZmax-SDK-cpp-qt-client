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
 * Email_Response.h
 *
 * An Email Object
 */

#ifndef Email_Response_H
#define Email_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Email_Response : public Object {
public:
    Email_Response();
    Email_Response(QString json);
    ~Email_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEmailId() const;
    void setPkiEmailId(const qint32 &pki_email_id);
    bool is_pki_email_id_Set() const;
    bool is_pki_email_id_Valid() const;

    qint32 getFkiEmailtypeId() const;
    void setFkiEmailtypeId(const qint32 &fki_emailtype_id);
    bool is_fki_emailtype_id_Set() const;
    bool is_fki_emailtype_id_Valid() const;

    QString getSEmailAddress() const;
    void setSEmailAddress(const QString &s_email_address);
    bool is_s_email_address_Set() const;
    bool is_s_email_address_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_email_id;
    bool m_pki_email_id_isSet;
    bool m_pki_email_id_isValid;

    qint32 m_fki_emailtype_id;
    bool m_fki_emailtype_id_isSet;
    bool m_fki_emailtype_id_isValid;

    QString m_s_email_address;
    bool m_s_email_address_isSet;
    bool m_s_email_address_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Email_Response)

#endif // Email_Response_H