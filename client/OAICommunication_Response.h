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
 * OAICommunication_Response.h
 *
 * A Communication Object
 */

#ifndef OAICommunication_Response_H
#define OAICommunication_Response_H

#include <QJsonObject>

#include "OAICommon_Audit.h"
#include "OAIComputed_eCommunicationDirection.h"
#include "OAIDescriptionstatic_Response.h"
#include "OAIEmailstatic_Response.h"
#include "OAIField_eCommunicationImportance.h"
#include "OAIField_eCommunicationType.h"
#include "OAIPhonestatic_Response.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIDescriptionstatic_Response;
class OAIEmailstatic_Response;
class OAIPhonestatic_Response;
class OAICommon_Audit;

class OAICommunication_Response : public OAIObject {
public:
    OAICommunication_Response();
    OAICommunication_Response(QString json);
    ~OAICommunication_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiCommunicationId() const;
    void setPkiCommunicationId(const qint32 &pki_communication_id);
    bool is_pki_communication_id_Set() const;
    bool is_pki_communication_id_Valid() const;

    OAIField_eCommunicationImportance getECommunicationImportance() const;
    void setECommunicationImportance(const OAIField_eCommunicationImportance &e_communication_importance);
    bool is_e_communication_importance_Set() const;
    bool is_e_communication_importance_Valid() const;

    OAIField_eCommunicationType getECommunicationType() const;
    void setECommunicationType(const OAIField_eCommunicationType &e_communication_type);
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

    OAIComputed_eCommunicationDirection getECommunicationDirection() const;
    void setECommunicationDirection(const OAIComputed_eCommunicationDirection &e_communication_direction);
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

    OAIDescriptionstatic_Response getObjDescriptionstaticSender() const;
    void setObjDescriptionstaticSender(const OAIDescriptionstatic_Response &obj_descriptionstatic_sender);
    bool is_obj_descriptionstatic_sender_Set() const;
    bool is_obj_descriptionstatic_sender_Valid() const;

    OAIEmailstatic_Response getObjEmailstaticSender() const;
    void setObjEmailstaticSender(const OAIEmailstatic_Response &obj_emailstatic_sender);
    bool is_obj_emailstatic_sender_Set() const;
    bool is_obj_emailstatic_sender_Valid() const;

    OAIPhonestatic_Response getObjPhonestaticSender() const;
    void setObjPhonestaticSender(const OAIPhonestatic_Response &obj_phonestatic_sender);
    bool is_obj_phonestatic_sender_Set() const;
    bool is_obj_phonestatic_sender_Valid() const;

    OAICommon_Audit getObjAudit() const;
    void setObjAudit(const OAICommon_Audit &obj_audit);
    bool is_obj_audit_Set() const;
    bool is_obj_audit_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_communication_id;
    bool m_pki_communication_id_isSet;
    bool m_pki_communication_id_isValid;

    OAIField_eCommunicationImportance e_communication_importance;
    bool m_e_communication_importance_isSet;
    bool m_e_communication_importance_isValid;

    OAIField_eCommunicationType e_communication_type;
    bool m_e_communication_type_isSet;
    bool m_e_communication_type_isValid;

    QString s_communication_subject;
    bool m_s_communication_subject_isSet;
    bool m_s_communication_subject_isValid;

    QString s_communication_bodyurl;
    bool m_s_communication_bodyurl_isSet;
    bool m_s_communication_bodyurl_isValid;

    OAIComputed_eCommunicationDirection e_communication_direction;
    bool m_e_communication_direction_isSet;
    bool m_e_communication_direction_isValid;

    qint32 i_communicationrecipient_count;
    bool m_i_communicationrecipient_count_isSet;
    bool m_i_communicationrecipient_count_isValid;

    bool b_communication_private;
    bool m_b_communication_private_isSet;
    bool m_b_communication_private_isValid;

    OAIDescriptionstatic_Response obj_descriptionstatic_sender;
    bool m_obj_descriptionstatic_sender_isSet;
    bool m_obj_descriptionstatic_sender_isValid;

    OAIEmailstatic_Response obj_emailstatic_sender;
    bool m_obj_emailstatic_sender_isSet;
    bool m_obj_emailstatic_sender_isValid;

    OAIPhonestatic_Response obj_phonestatic_sender;
    bool m_obj_phonestatic_sender_isSet;
    bool m_obj_phonestatic_sender_isValid;

    OAICommon_Audit obj_audit;
    bool m_obj_audit_isSet;
    bool m_obj_audit_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICommunication_Response)

#endif // OAICommunication_Response_H
