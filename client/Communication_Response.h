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
 * Communication_Response.h
 *
 * A Communication Object
 */

#ifndef Communication_Response_H
#define Communication_Response_H

#include <QJsonObject>

#include "Common_Audit.h"
#include "Computed_eCommunicationDirection.h"
#include "Descriptionstatic_Response.h"
#include "Emailstatic_Response.h"
#include "Field_eCommunicationImportance.h"
#include "Field_eCommunicationType.h"
#include "Phonestatic_Response.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Descriptionstatic_Response;
class Emailstatic_Response;
class Phonestatic_Response;
class Common_Audit;

class Communication_Response : public Object {
public:
    Communication_Response();
    Communication_Response(QString json);
    ~Communication_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiCommunicationId() const;
    void setPkiCommunicationId(const qint32 &pki_communication_id);
    bool is_pki_communication_id_Set() const;
    bool is_pki_communication_id_Valid() const;

    Field_eCommunicationImportance getECommunicationImportance() const;
    void setECommunicationImportance(const Field_eCommunicationImportance &e_communication_importance);
    bool is_e_communication_importance_Set() const;
    bool is_e_communication_importance_Valid() const;

    Field_eCommunicationType getECommunicationType() const;
    void setECommunicationType(const Field_eCommunicationType &e_communication_type);
    bool is_e_communication_type_Set() const;
    bool is_e_communication_type_Valid() const;

    QString getSCommunicationSubject() const;
    void setSCommunicationSubject(const QString &s_communication_subject);
    bool is_s_communication_subject_Set() const;
    bool is_s_communication_subject_Valid() const;

    QString getSCommunicationBodyurl() const;
    void setSCommunicationBodyurl(const QString &s_communication_bodyurl);
    bool is_s_communication_bodyurl_Set() const;
    bool is_s_communication_bodyurl_Valid() const;

    Computed_eCommunicationDirection getECommunicationDirection() const;
    void setECommunicationDirection(const Computed_eCommunicationDirection &e_communication_direction);
    bool is_e_communication_direction_Set() const;
    bool is_e_communication_direction_Valid() const;

    qint32 getICommunicationrecipientCount() const;
    void setICommunicationrecipientCount(const qint32 &i_communicationrecipient_count);
    bool is_i_communicationrecipient_count_Set() const;
    bool is_i_communicationrecipient_count_Valid() const;

    bool isBCommunicationPrivate() const;
    void setBCommunicationPrivate(const bool &b_communication_private);
    bool is_b_communication_private_Set() const;
    bool is_b_communication_private_Valid() const;

    Descriptionstatic_Response getObjDescriptionstaticSender() const;
    void setObjDescriptionstaticSender(const Descriptionstatic_Response &obj_descriptionstatic_sender);
    bool is_obj_descriptionstatic_sender_Set() const;
    bool is_obj_descriptionstatic_sender_Valid() const;

    Emailstatic_Response getObjEmailstaticSender() const;
    void setObjEmailstaticSender(const Emailstatic_Response &obj_emailstatic_sender);
    bool is_obj_emailstatic_sender_Set() const;
    bool is_obj_emailstatic_sender_Valid() const;

    Phonestatic_Response getObjPhonestaticSender() const;
    void setObjPhonestaticSender(const Phonestatic_Response &obj_phonestatic_sender);
    bool is_obj_phonestatic_sender_Set() const;
    bool is_obj_phonestatic_sender_Valid() const;

    Common_Audit getObjAudit() const;
    void setObjAudit(const Common_Audit &obj_audit);
    bool is_obj_audit_Set() const;
    bool is_obj_audit_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_communication_id;
    bool m_pki_communication_id_isSet;
    bool m_pki_communication_id_isValid;

    Field_eCommunicationImportance m_e_communication_importance;
    bool m_e_communication_importance_isSet;
    bool m_e_communication_importance_isValid;

    Field_eCommunicationType m_e_communication_type;
    bool m_e_communication_type_isSet;
    bool m_e_communication_type_isValid;

    QString m_s_communication_subject;
    bool m_s_communication_subject_isSet;
    bool m_s_communication_subject_isValid;

    QString m_s_communication_bodyurl;
    bool m_s_communication_bodyurl_isSet;
    bool m_s_communication_bodyurl_isValid;

    Computed_eCommunicationDirection m_e_communication_direction;
    bool m_e_communication_direction_isSet;
    bool m_e_communication_direction_isValid;

    qint32 m_i_communicationrecipient_count;
    bool m_i_communicationrecipient_count_isSet;
    bool m_i_communicationrecipient_count_isValid;

    bool m_b_communication_private;
    bool m_b_communication_private_isSet;
    bool m_b_communication_private_isValid;

    Descriptionstatic_Response m_obj_descriptionstatic_sender;
    bool m_obj_descriptionstatic_sender_isSet;
    bool m_obj_descriptionstatic_sender_isValid;

    Emailstatic_Response m_obj_emailstatic_sender;
    bool m_obj_emailstatic_sender_isSet;
    bool m_obj_emailstatic_sender_isValid;

    Phonestatic_Response m_obj_phonestatic_sender;
    bool m_obj_phonestatic_sender_isSet;
    bool m_obj_phonestatic_sender_isValid;

    Common_Audit m_obj_audit;
    bool m_obj_audit_isSet;
    bool m_obj_audit_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Communication_Response)

#endif // Communication_Response_H
