/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEmail_RequestCompound.h
 *
 * An Email Object and children to create a complete structure
 */

#ifndef OAIEmail_RequestCompound_H
#define OAIEmail_RequestCompound_H

#include <QJsonObject>

#include "OAIEmail_Request.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEmail_RequestCompound : public OAIObject {
public:
    OAIEmail_RequestCompound();
    OAIEmail_RequestCompound(QString json);
    ~OAIEmail_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

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

    qint32 fki_emailtype_id;
    bool m_fki_emailtype_id_isSet;
    bool m_fki_emailtype_id_isValid;

    QString s_email_address;
    bool m_s_email_address_isSet;
    bool m_s_email_address_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEmail_RequestCompound)

#endif // OAIEmail_RequestCompound_H