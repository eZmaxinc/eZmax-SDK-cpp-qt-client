/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Custom_Webhook_Response.h
 *
 * A custom Webhook object
 */

#ifndef Custom_Webhook_Response_H
#define Custom_Webhook_Response_H

#include <QJsonObject>

#include "Common_Audit.h"
#include "Field_eWebhookEzsignevent.h"
#include "Field_eWebhookManagementevent.h"
#include "Field_eWebhookModule.h"
#include "Webhookheader_ResponseCompound.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Common_Audit;
class Webhookheader_ResponseCompound;

class Custom_Webhook_Response : public Object {
public:
    Custom_Webhook_Response();
    Custom_Webhook_Response(QString json);
    ~Custom_Webhook_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiWebhookId() const;
    void setPkiWebhookId(const qint32 &pki_webhook_id);
    bool is_pki_webhook_id_Set() const;
    bool is_pki_webhook_id_Valid() const;

    qint32 getFkiAuthenticationexternalId() const;
    void setFkiAuthenticationexternalId(const qint32 &fki_authenticationexternal_id);
    bool is_fki_authenticationexternal_id_Set() const;
    bool is_fki_authenticationexternal_id_Valid() const;

    QString getSWebhookDescription() const;
    void setSWebhookDescription(const QString &s_webhook_description);
    bool is_s_webhook_description_Set() const;
    bool is_s_webhook_description_Valid() const;

    qint32 getFkiEzsignfoldertypeId() const;
    void setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id);
    bool is_fki_ezsignfoldertype_id_Set() const;
    bool is_fki_ezsignfoldertype_id_Valid() const;

    QString getSEzsignfoldertypeNameX() const;
    void setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x);
    bool is_s_ezsignfoldertype_name_x_Set() const;
    bool is_s_ezsignfoldertype_name_x_Valid() const;

    Field_eWebhookModule getEWebhookModule() const;
    void setEWebhookModule(const Field_eWebhookModule &e_webhook_module);
    bool is_e_webhook_module_Set() const;
    bool is_e_webhook_module_Valid() const;

    Field_eWebhookEzsignevent getEWebhookEzsignevent() const;
    void setEWebhookEzsignevent(const Field_eWebhookEzsignevent &e_webhook_ezsignevent);
    bool is_e_webhook_ezsignevent_Set() const;
    bool is_e_webhook_ezsignevent_Valid() const;

    Field_eWebhookManagementevent getEWebhookManagementevent() const;
    void setEWebhookManagementevent(const Field_eWebhookManagementevent &e_webhook_managementevent);
    bool is_e_webhook_managementevent_Set() const;
    bool is_e_webhook_managementevent_Valid() const;

    QString getSWebhookUrl() const;
    void setSWebhookUrl(const QString &s_webhook_url);
    bool is_s_webhook_url_Set() const;
    bool is_s_webhook_url_Valid() const;

    QString getSWebhookEmailfailed() const;
    void setSWebhookEmailfailed(const QString &s_webhook_emailfailed);
    bool is_s_webhook_emailfailed_Set() const;
    bool is_s_webhook_emailfailed_Valid() const;

    QString getSWebhookApikey() const;
    void setSWebhookApikey(const QString &s_webhook_apikey);
    bool is_s_webhook_apikey_Set() const;
    bool is_s_webhook_apikey_Valid() const;

    QString getSWebhookSecret() const;
    void setSWebhookSecret(const QString &s_webhook_secret);
    bool is_s_webhook_secret_Set() const;
    bool is_s_webhook_secret_Valid() const;

    bool isBWebhookIsactive() const;
    void setBWebhookIsactive(const bool &b_webhook_isactive);
    bool is_b_webhook_isactive_Set() const;
    bool is_b_webhook_isactive_Valid() const;

    bool isBWebhookIssigned() const;
    void setBWebhookIssigned(const bool &b_webhook_issigned);
    bool is_b_webhook_issigned_Set() const;
    bool is_b_webhook_issigned_Valid() const;

    bool isBWebhookSkipsslvalidation() const;
    void setBWebhookSkipsslvalidation(const bool &b_webhook_skipsslvalidation);
    bool is_b_webhook_skipsslvalidation_Set() const;
    bool is_b_webhook_skipsslvalidation_Valid() const;

    QString getSAuthenticationexternalDescription() const;
    void setSAuthenticationexternalDescription(const QString &s_authenticationexternal_description);
    bool is_s_authenticationexternal_description_Set() const;
    bool is_s_authenticationexternal_description_Valid() const;

    Common_Audit getObjAudit() const;
    void setObjAudit(const Common_Audit &obj_audit);
    bool is_obj_audit_Set() const;
    bool is_obj_audit_Valid() const;

    QString getSWebhookEvent() const;
    void setSWebhookEvent(const QString &s_webhook_event);
    bool is_s_webhook_event_Set() const;
    bool is_s_webhook_event_Valid() const;

    QList<Webhookheader_ResponseCompound> getAObjWebhookheader() const;
    void setAObjWebhookheader(const QList<Webhookheader_ResponseCompound> &a_obj_webhookheader);
    bool is_a_obj_webhookheader_Set() const;
    bool is_a_obj_webhookheader_Valid() const;

    QString getPksCustomerCode() const;
    void setPksCustomerCode(const QString &pks_customer_code);
    bool is_pks_customer_code_Set() const;
    bool is_pks_customer_code_Valid() const;

    Q_DECL_DEPRECATED bool isBWebhookTest() const;
    Q_DECL_DEPRECATED void setBWebhookTest(const bool &b_webhook_test);
    Q_DECL_DEPRECATED bool is_b_webhook_test_Set() const;
    Q_DECL_DEPRECATED bool is_b_webhook_test_Valid() const;

    QString getEWebhookEmittype() const;
    void setEWebhookEmittype(const QString &e_webhook_emittype);
    bool is_e_webhook_emittype_Set() const;
    bool is_e_webhook_emittype_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_webhook_id;
    bool m_pki_webhook_id_isSet;
    bool m_pki_webhook_id_isValid;

    qint32 m_fki_authenticationexternal_id;
    bool m_fki_authenticationexternal_id_isSet;
    bool m_fki_authenticationexternal_id_isValid;

    QString m_s_webhook_description;
    bool m_s_webhook_description_isSet;
    bool m_s_webhook_description_isValid;

    qint32 m_fki_ezsignfoldertype_id;
    bool m_fki_ezsignfoldertype_id_isSet;
    bool m_fki_ezsignfoldertype_id_isValid;

    QString m_s_ezsignfoldertype_name_x;
    bool m_s_ezsignfoldertype_name_x_isSet;
    bool m_s_ezsignfoldertype_name_x_isValid;

    Field_eWebhookModule m_e_webhook_module;
    bool m_e_webhook_module_isSet;
    bool m_e_webhook_module_isValid;

    Field_eWebhookEzsignevent m_e_webhook_ezsignevent;
    bool m_e_webhook_ezsignevent_isSet;
    bool m_e_webhook_ezsignevent_isValid;

    Field_eWebhookManagementevent m_e_webhook_managementevent;
    bool m_e_webhook_managementevent_isSet;
    bool m_e_webhook_managementevent_isValid;

    QString m_s_webhook_url;
    bool m_s_webhook_url_isSet;
    bool m_s_webhook_url_isValid;

    QString m_s_webhook_emailfailed;
    bool m_s_webhook_emailfailed_isSet;
    bool m_s_webhook_emailfailed_isValid;

    QString m_s_webhook_apikey;
    bool m_s_webhook_apikey_isSet;
    bool m_s_webhook_apikey_isValid;

    QString m_s_webhook_secret;
    bool m_s_webhook_secret_isSet;
    bool m_s_webhook_secret_isValid;

    bool m_b_webhook_isactive;
    bool m_b_webhook_isactive_isSet;
    bool m_b_webhook_isactive_isValid;

    bool m_b_webhook_issigned;
    bool m_b_webhook_issigned_isSet;
    bool m_b_webhook_issigned_isValid;

    bool m_b_webhook_skipsslvalidation;
    bool m_b_webhook_skipsslvalidation_isSet;
    bool m_b_webhook_skipsslvalidation_isValid;

    QString m_s_authenticationexternal_description;
    bool m_s_authenticationexternal_description_isSet;
    bool m_s_authenticationexternal_description_isValid;

    Common_Audit m_obj_audit;
    bool m_obj_audit_isSet;
    bool m_obj_audit_isValid;

    QString m_s_webhook_event;
    bool m_s_webhook_event_isSet;
    bool m_s_webhook_event_isValid;

    QList<Webhookheader_ResponseCompound> m_a_obj_webhookheader;
    bool m_a_obj_webhookheader_isSet;
    bool m_a_obj_webhookheader_isValid;

    QString m_pks_customer_code;
    bool m_pks_customer_code_isSet;
    bool m_pks_customer_code_isValid;

    bool m_b_webhook_test;
    bool m_b_webhook_test_isSet;
    bool m_b_webhook_test_isValid;

    QString m_e_webhook_emittype;
    bool m_e_webhook_emittype_isSet;
    bool m_e_webhook_emittype_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Custom_Webhook_Response)

#endif // Custom_Webhook_Response_H
