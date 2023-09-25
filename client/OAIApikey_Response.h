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
 * OAIApikey_Response.h
 *
 * An Apikey Object
 */

#ifndef OAIApikey_Response_H
#define OAIApikey_Response_H

#include <QJsonObject>

#include "OAICommon_Audit.h"
#include "OAICustom_ContactName_Response.h"
#include "OAIMultilingual_ApikeyDescription.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {
class OAIMultilingual_ApikeyDescription;
class OAICustom_ContactName_Response;
class OAICommon_Audit;

class OAIApikey_Response : public OAIObject {
public:
    OAIApikey_Response();
    OAIApikey_Response(QString json);
    ~OAIApikey_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiApikeyId() const;
    void setPkiApikeyId(const qint32 &pki_apikey_id);
    bool is_pki_apikey_id_Set() const;
    bool is_pki_apikey_id_Valid() const;

    qint32 getFkiUserId() const;
    void setFkiUserId(const qint32 &fki_user_id);
    bool is_fki_user_id_Set() const;
    bool is_fki_user_id_Valid() const;

    OAIMultilingual_ApikeyDescription getObjApikeyDescription() const;
    void setObjApikeyDescription(const OAIMultilingual_ApikeyDescription &obj_apikey_description);
    bool is_obj_apikey_description_Set() const;
    bool is_obj_apikey_description_Valid() const;

    OAICustom_ContactName_Response getObjContactName() const;
    void setObjContactName(const OAICustom_ContactName_Response &obj_contact_name);
    bool is_obj_contact_name_Set() const;
    bool is_obj_contact_name_Valid() const;

    QString getSApikeyApikey() const;
    void setSApikeyApikey(const QString &s_apikey_apikey);
    bool is_s_apikey_apikey_Set() const;
    bool is_s_apikey_apikey_Valid() const;

    QString getSApikeySecret() const;
    void setSApikeySecret(const QString &s_apikey_secret);
    bool is_s_apikey_secret_Set() const;
    bool is_s_apikey_secret_Valid() const;

    bool isBApikeyIsactive() const;
    void setBApikeyIsactive(const bool &b_apikey_isactive);
    bool is_b_apikey_isactive_Set() const;
    bool is_b_apikey_isactive_Valid() const;

    bool isBApikeyIssigned() const;
    void setBApikeyIssigned(const bool &b_apikey_issigned);
    bool is_b_apikey_issigned_Set() const;
    bool is_b_apikey_issigned_Valid() const;

    OAICommon_Audit getObjAudit() const;
    void setObjAudit(const OAICommon_Audit &obj_audit);
    bool is_obj_audit_Set() const;
    bool is_obj_audit_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_apikey_id;
    bool m_pki_apikey_id_isSet;
    bool m_pki_apikey_id_isValid;

    qint32 m_fki_user_id;
    bool m_fki_user_id_isSet;
    bool m_fki_user_id_isValid;

    OAIMultilingual_ApikeyDescription m_obj_apikey_description;
    bool m_obj_apikey_description_isSet;
    bool m_obj_apikey_description_isValid;

    OAICustom_ContactName_Response m_obj_contact_name;
    bool m_obj_contact_name_isSet;
    bool m_obj_contact_name_isValid;

    QString m_s_apikey_apikey;
    bool m_s_apikey_apikey_isSet;
    bool m_s_apikey_apikey_isValid;

    QString m_s_apikey_secret;
    bool m_s_apikey_secret_isSet;
    bool m_s_apikey_secret_isValid;

    bool m_b_apikey_isactive;
    bool m_b_apikey_isactive_isSet;
    bool m_b_apikey_isactive_isValid;

    bool m_b_apikey_issigned;
    bool m_b_apikey_issigned_isSet;
    bool m_b_apikey_issigned_isValid;

    OAICommon_Audit m_obj_audit;
    bool m_obj_audit_isSet;
    bool m_obj_audit_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIApikey_Response)

#endif // OAIApikey_Response_H
