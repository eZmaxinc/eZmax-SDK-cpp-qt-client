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
 * OAICommunicationrecipient_ResponseCompound.h
 *
 * A Communicationreciient Object
 */

#ifndef OAICommunicationrecipient_ResponseCompound_H
#define OAICommunicationrecipient_ResponseCompound_H

#include <QJsonObject>

#include "OAIDescriptionstatic_ResponseCompound.h"
#include "OAIEmailstatic_ResponseCompound.h"
#include "OAIField_eCommunicationrecipientObjecttype.h"
#include "OAIField_eCommunicationrecipientType.h"
#include "OAIPhonestatic_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIDescriptionstatic_ResponseCompound;
class OAIEmailstatic_ResponseCompound;
class OAIPhonestatic_ResponseCompound;

class OAICommunicationrecipient_ResponseCompound : public OAIObject {
public:
    OAICommunicationrecipient_ResponseCompound();
    OAICommunicationrecipient_ResponseCompound(QString json);
    ~OAICommunicationrecipient_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiCommunicationrecipientId() const;
    void setPkiCommunicationrecipientId(const qint32 &pki_communicationrecipient_id);
    bool is_pki_communicationrecipient_id_Set() const;
    bool is_pki_communicationrecipient_id_Valid() const;

    OAIField_eCommunicationrecipientObjecttype getECommunicationrecipientObjecttype() const;
    void setECommunicationrecipientObjecttype(const OAIField_eCommunicationrecipientObjecttype &e_communicationrecipient_objecttype);
    bool is_e_communicationrecipient_objecttype_Set() const;
    bool is_e_communicationrecipient_objecttype_Valid() const;

    qint32 getFkiAgentId() const;
    void setFkiAgentId(const qint32 &fki_agent_id);
    bool is_fki_agent_id_Set() const;
    bool is_fki_agent_id_Valid() const;

    qint32 getFkiBrokerId() const;
    void setFkiBrokerId(const qint32 &fki_broker_id);
    bool is_fki_broker_id_Set() const;
    bool is_fki_broker_id_Valid() const;

    qint32 getFkiContactId() const;
    void setFkiContactId(const qint32 &fki_contact_id);
    bool is_fki_contact_id_Set() const;
    bool is_fki_contact_id_Valid() const;

    qint32 getFkiCustomerId() const;
    void setFkiCustomerId(const qint32 &fki_customer_id);
    bool is_fki_customer_id_Set() const;
    bool is_fki_customer_id_Valid() const;

    qint32 getFkiEmployeeId() const;
    void setFkiEmployeeId(const qint32 &fki_employee_id);
    bool is_fki_employee_id_Set() const;
    bool is_fki_employee_id_Valid() const;

    qint32 getFkiEzsignsignerId() const;
    void setFkiEzsignsignerId(const qint32 &fki_ezsignsigner_id);
    bool is_fki_ezsignsigner_id_Set() const;
    bool is_fki_ezsignsigner_id_Valid() const;

    qint32 getFkiFranchiseofficeId() const;
    void setFkiFranchiseofficeId(const qint32 &fki_franchiseoffice_id);
    bool is_fki_franchiseoffice_id_Set() const;
    bool is_fki_franchiseoffice_id_Valid() const;

    qint32 getFkiUserId() const;
    void setFkiUserId(const qint32 &fki_user_id);
    bool is_fki_user_id_Set() const;
    bool is_fki_user_id_Valid() const;

    qint32 getFkiAgentincorporationId() const;
    void setFkiAgentincorporationId(const qint32 &fki_agentincorporation_id);
    bool is_fki_agentincorporation_id_Set() const;
    bool is_fki_agentincorporation_id_Valid() const;

    qint32 getFkiAssistantId() const;
    void setFkiAssistantId(const qint32 &fki_assistant_id);
    bool is_fki_assistant_id_Set() const;
    bool is_fki_assistant_id_Valid() const;

    qint32 getFkiExternalbrokerId() const;
    void setFkiExternalbrokerId(const qint32 &fki_externalbroker_id);
    bool is_fki_externalbroker_id_Set() const;
    bool is_fki_externalbroker_id_Valid() const;

    qint32 getFkiEzcomagentId() const;
    void setFkiEzcomagentId(const qint32 &fki_ezcomagent_id);
    bool is_fki_ezcomagent_id_Set() const;
    bool is_fki_ezcomagent_id_Valid() const;

    qint32 getFkiNotaryId() const;
    void setFkiNotaryId(const qint32 &fki_notary_id);
    bool is_fki_notary_id_Set() const;
    bool is_fki_notary_id_Valid() const;

    qint32 getFkiRewardmemberId() const;
    void setFkiRewardmemberId(const qint32 &fki_rewardmember_id);
    bool is_fki_rewardmember_id_Set() const;
    bool is_fki_rewardmember_id_Valid() const;

    qint32 getFkiSupplierId() const;
    void setFkiSupplierId(const qint32 &fki_supplier_id);
    bool is_fki_supplier_id_Set() const;
    bool is_fki_supplier_id_Valid() const;

    OAIField_eCommunicationrecipientType getECommunicationrecipientType() const;
    void setECommunicationrecipientType(const OAIField_eCommunicationrecipientType &e_communicationrecipient_type);
    bool is_e_communicationrecipient_type_Set() const;
    bool is_e_communicationrecipient_type_Valid() const;

    OAIDescriptionstatic_ResponseCompound getObjDescriptionstatic() const;
    void setObjDescriptionstatic(const OAIDescriptionstatic_ResponseCompound &obj_descriptionstatic);
    bool is_obj_descriptionstatic_Set() const;
    bool is_obj_descriptionstatic_Valid() const;

    OAIEmailstatic_ResponseCompound getObjEmailstatic() const;
    void setObjEmailstatic(const OAIEmailstatic_ResponseCompound &obj_emailstatic);
    bool is_obj_emailstatic_Set() const;
    bool is_obj_emailstatic_Valid() const;

    OAIPhonestatic_ResponseCompound getObjPhonestatic() const;
    void setObjPhonestatic(const OAIPhonestatic_ResponseCompound &obj_phonestatic);
    bool is_obj_phonestatic_Set() const;
    bool is_obj_phonestatic_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_communicationrecipient_id;
    bool m_pki_communicationrecipient_id_isSet;
    bool m_pki_communicationrecipient_id_isValid;

    OAIField_eCommunicationrecipientObjecttype e_communicationrecipient_objecttype;
    bool m_e_communicationrecipient_objecttype_isSet;
    bool m_e_communicationrecipient_objecttype_isValid;

    qint32 fki_agent_id;
    bool m_fki_agent_id_isSet;
    bool m_fki_agent_id_isValid;

    qint32 fki_broker_id;
    bool m_fki_broker_id_isSet;
    bool m_fki_broker_id_isValid;

    qint32 fki_contact_id;
    bool m_fki_contact_id_isSet;
    bool m_fki_contact_id_isValid;

    qint32 fki_customer_id;
    bool m_fki_customer_id_isSet;
    bool m_fki_customer_id_isValid;

    qint32 fki_employee_id;
    bool m_fki_employee_id_isSet;
    bool m_fki_employee_id_isValid;

    qint32 fki_ezsignsigner_id;
    bool m_fki_ezsignsigner_id_isSet;
    bool m_fki_ezsignsigner_id_isValid;

    qint32 fki_franchiseoffice_id;
    bool m_fki_franchiseoffice_id_isSet;
    bool m_fki_franchiseoffice_id_isValid;

    qint32 fki_user_id;
    bool m_fki_user_id_isSet;
    bool m_fki_user_id_isValid;

    qint32 fki_agentincorporation_id;
    bool m_fki_agentincorporation_id_isSet;
    bool m_fki_agentincorporation_id_isValid;

    qint32 fki_assistant_id;
    bool m_fki_assistant_id_isSet;
    bool m_fki_assistant_id_isValid;

    qint32 fki_externalbroker_id;
    bool m_fki_externalbroker_id_isSet;
    bool m_fki_externalbroker_id_isValid;

    qint32 fki_ezcomagent_id;
    bool m_fki_ezcomagent_id_isSet;
    bool m_fki_ezcomagent_id_isValid;

    qint32 fki_notary_id;
    bool m_fki_notary_id_isSet;
    bool m_fki_notary_id_isValid;

    qint32 fki_rewardmember_id;
    bool m_fki_rewardmember_id_isSet;
    bool m_fki_rewardmember_id_isValid;

    qint32 fki_supplier_id;
    bool m_fki_supplier_id_isSet;
    bool m_fki_supplier_id_isValid;

    OAIField_eCommunicationrecipientType e_communicationrecipient_type;
    bool m_e_communicationrecipient_type_isSet;
    bool m_e_communicationrecipient_type_isValid;

    OAIDescriptionstatic_ResponseCompound obj_descriptionstatic;
    bool m_obj_descriptionstatic_isSet;
    bool m_obj_descriptionstatic_isValid;

    OAIEmailstatic_ResponseCompound obj_emailstatic;
    bool m_obj_emailstatic_isSet;
    bool m_obj_emailstatic_isValid;

    OAIPhonestatic_ResponseCompound obj_phonestatic;
    bool m_obj_phonestatic_isSet;
    bool m_obj_phonestatic_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICommunicationrecipient_ResponseCompound)

#endif // OAICommunicationrecipient_ResponseCompound_H
