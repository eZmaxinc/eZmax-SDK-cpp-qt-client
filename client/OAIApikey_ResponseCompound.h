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
 * OAIApikey_ResponseCompound.h
 *
 * An Apikey Object and children to create a complete structure
 */

#ifndef OAIApikey_ResponseCompound_H
#define OAIApikey_ResponseCompound_H

#include <QJsonObject>

#include "OAICommon_Audit.h"
#include "OAIMultilingual_ApikeyDescription.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIMultilingual_ApikeyDescription;
class OAICommon_Audit;

class OAIApikey_ResponseCompound : public OAIObject {
public:
    OAIApikey_ResponseCompound();
    OAIApikey_ResponseCompound(QString json);
    ~OAIApikey_ResponseCompound() override;

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

    QString getSComputedToken() const;
    void setSComputedToken(const QString &s_computed_token);
    bool is_s_computed_token_Set() const;
    bool is_s_computed_token_Valid() const;

    bool isBApikeyIsactive() const;
    void setBApikeyIsactive(const bool &b_apikey_isactive);
    bool is_b_apikey_isactive_Set() const;
    bool is_b_apikey_isactive_Valid() const;

    OAICommon_Audit getObjAudit() const;
    void setObjAudit(const OAICommon_Audit &obj_audit);
    bool is_obj_audit_Set() const;
    bool is_obj_audit_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_apikey_id;
    bool m_pki_apikey_id_isSet;
    bool m_pki_apikey_id_isValid;

    qint32 fki_user_id;
    bool m_fki_user_id_isSet;
    bool m_fki_user_id_isValid;

    OAIMultilingual_ApikeyDescription obj_apikey_description;
    bool m_obj_apikey_description_isSet;
    bool m_obj_apikey_description_isValid;

    QString s_computed_token;
    bool m_s_computed_token_isSet;
    bool m_s_computed_token_isValid;

    bool b_apikey_isactive;
    bool m_b_apikey_isactive_isSet;
    bool m_b_apikey_isactive_isValid;

    OAICommon_Audit obj_audit;
    bool m_obj_audit_isSet;
    bool m_obj_audit_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIApikey_ResponseCompound)

#endif // OAIApikey_ResponseCompound_H
