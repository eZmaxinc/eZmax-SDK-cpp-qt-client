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
 * Webhook_ResponseCompound.h
 *
 * A Webhook Object
 */

#ifndef Webhook_ResponseCompound_H
#define Webhook_ResponseCompound_H

#include <QJsonObject>

#include "Field_eWebhookEzsignevent.h"
#include "Field_eWebhookManagementevent.h"
#include "Field_eWebhookModule.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Webhook_ResponseCompound : public Object {
public:
    Webhook_ResponseCompound();
    Webhook_ResponseCompound(QString json);
    ~Webhook_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiWebhookId() const;
    void setPkiWebhookId(const qint32 &pki_webhook_id);
    bool is_pki_webhook_id_Set() const;
    bool is_pki_webhook_id_Valid() const;

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

    bool isBWebhookIsactive() const;
    void setBWebhookIsactive(const bool &b_webhook_isactive);
    bool is_b_webhook_isactive_Set() const;
    bool is_b_webhook_isactive_Valid() const;

    bool isBWebhookSkipsslvalidation() const;
    void setBWebhookSkipsslvalidation(const bool &b_webhook_skipsslvalidation);
    bool is_b_webhook_skipsslvalidation_Set() const;
    bool is_b_webhook_skipsslvalidation_Valid() const;

    QString getSWebhookEvent() const;
    void setSWebhookEvent(const QString &s_webhook_event);
    bool is_s_webhook_event_Set() const;
    bool is_s_webhook_event_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_webhook_id;
    bool m_pki_webhook_id_isSet;
    bool m_pki_webhook_id_isValid;

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

    bool m_b_webhook_isactive;
    bool m_b_webhook_isactive_isSet;
    bool m_b_webhook_isactive_isValid;

    bool m_b_webhook_skipsslvalidation;
    bool m_b_webhook_skipsslvalidation_isSet;
    bool m_b_webhook_skipsslvalidation_isValid;

    QString m_s_webhook_event;
    bool m_s_webhook_event_isSet;
    bool m_s_webhook_event_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Webhook_ResponseCompound)

#endif // Webhook_ResponseCompound_H
