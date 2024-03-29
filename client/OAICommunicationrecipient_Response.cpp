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

#include "OAICommunicationrecipient_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommunicationrecipient_Response::OAICommunicationrecipient_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommunicationrecipient_Response::OAICommunicationrecipient_Response() {
    this->initializeModel();
}

OAICommunicationrecipient_Response::~OAICommunicationrecipient_Response() {}

void OAICommunicationrecipient_Response::initializeModel() {

    m_pki_communicationrecipient_id_isSet = false;
    m_pki_communicationrecipient_id_isValid = false;

    m_e_communicationrecipient_objecttype_isSet = false;
    m_e_communicationrecipient_objecttype_isValid = false;

    m_fki_agent_id_isSet = false;
    m_fki_agent_id_isValid = false;

    m_fki_broker_id_isSet = false;
    m_fki_broker_id_isValid = false;

    m_fki_contact_id_isSet = false;
    m_fki_contact_id_isValid = false;

    m_fki_customer_id_isSet = false;
    m_fki_customer_id_isValid = false;

    m_fki_employee_id_isSet = false;
    m_fki_employee_id_isValid = false;

    m_fki_ezsignsigner_id_isSet = false;
    m_fki_ezsignsigner_id_isValid = false;

    m_fki_franchiseoffice_id_isSet = false;
    m_fki_franchiseoffice_id_isValid = false;

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_fki_agentincorporation_id_isSet = false;
    m_fki_agentincorporation_id_isValid = false;

    m_fki_assistant_id_isSet = false;
    m_fki_assistant_id_isValid = false;

    m_fki_externalbroker_id_isSet = false;
    m_fki_externalbroker_id_isValid = false;

    m_fki_ezcomagent_id_isSet = false;
    m_fki_ezcomagent_id_isValid = false;

    m_fki_notary_id_isSet = false;
    m_fki_notary_id_isValid = false;

    m_fki_rewardmember_id_isSet = false;
    m_fki_rewardmember_id_isValid = false;

    m_fki_supplier_id_isSet = false;
    m_fki_supplier_id_isValid = false;

    m_e_communicationrecipient_type_isSet = false;
    m_e_communicationrecipient_type_isValid = false;

    m_obj_descriptionstatic_isSet = false;
    m_obj_descriptionstatic_isValid = false;

    m_obj_emailstatic_isSet = false;
    m_obj_emailstatic_isValid = false;

    m_obj_phonestatic_isSet = false;
    m_obj_phonestatic_isValid = false;
}

void OAICommunicationrecipient_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommunicationrecipient_Response::fromJsonObject(QJsonObject json) {

    m_pki_communicationrecipient_id_isValid = ::OpenAPI::fromJsonValue(pki_communicationrecipient_id, json[QString("pkiCommunicationrecipientID")]);
    m_pki_communicationrecipient_id_isSet = !json[QString("pkiCommunicationrecipientID")].isNull() && m_pki_communicationrecipient_id_isValid;

    m_e_communicationrecipient_objecttype_isValid = ::OpenAPI::fromJsonValue(e_communicationrecipient_objecttype, json[QString("eCommunicationrecipientObjecttype")]);
    m_e_communicationrecipient_objecttype_isSet = !json[QString("eCommunicationrecipientObjecttype")].isNull() && m_e_communicationrecipient_objecttype_isValid;

    m_fki_agent_id_isValid = ::OpenAPI::fromJsonValue(fki_agent_id, json[QString("fkiAgentID")]);
    m_fki_agent_id_isSet = !json[QString("fkiAgentID")].isNull() && m_fki_agent_id_isValid;

    m_fki_broker_id_isValid = ::OpenAPI::fromJsonValue(fki_broker_id, json[QString("fkiBrokerID")]);
    m_fki_broker_id_isSet = !json[QString("fkiBrokerID")].isNull() && m_fki_broker_id_isValid;

    m_fki_contact_id_isValid = ::OpenAPI::fromJsonValue(fki_contact_id, json[QString("fkiContactID")]);
    m_fki_contact_id_isSet = !json[QString("fkiContactID")].isNull() && m_fki_contact_id_isValid;

    m_fki_customer_id_isValid = ::OpenAPI::fromJsonValue(fki_customer_id, json[QString("fkiCustomerID")]);
    m_fki_customer_id_isSet = !json[QString("fkiCustomerID")].isNull() && m_fki_customer_id_isValid;

    m_fki_employee_id_isValid = ::OpenAPI::fromJsonValue(fki_employee_id, json[QString("fkiEmployeeID")]);
    m_fki_employee_id_isSet = !json[QString("fkiEmployeeID")].isNull() && m_fki_employee_id_isValid;

    m_fki_ezsignsigner_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignsigner_id, json[QString("fkiEzsignsignerID")]);
    m_fki_ezsignsigner_id_isSet = !json[QString("fkiEzsignsignerID")].isNull() && m_fki_ezsignsigner_id_isValid;

    m_fki_franchiseoffice_id_isValid = ::OpenAPI::fromJsonValue(fki_franchiseoffice_id, json[QString("fkiFranchiseofficeID")]);
    m_fki_franchiseoffice_id_isSet = !json[QString("fkiFranchiseofficeID")].isNull() && m_fki_franchiseoffice_id_isValid;

    m_fki_user_id_isValid = ::OpenAPI::fromJsonValue(fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_fki_agentincorporation_id_isValid = ::OpenAPI::fromJsonValue(fki_agentincorporation_id, json[QString("fkiAgentincorporationID")]);
    m_fki_agentincorporation_id_isSet = !json[QString("fkiAgentincorporationID")].isNull() && m_fki_agentincorporation_id_isValid;

    m_fki_assistant_id_isValid = ::OpenAPI::fromJsonValue(fki_assistant_id, json[QString("fkiAssistantID")]);
    m_fki_assistant_id_isSet = !json[QString("fkiAssistantID")].isNull() && m_fki_assistant_id_isValid;

    m_fki_externalbroker_id_isValid = ::OpenAPI::fromJsonValue(fki_externalbroker_id, json[QString("fkiExternalbrokerID")]);
    m_fki_externalbroker_id_isSet = !json[QString("fkiExternalbrokerID")].isNull() && m_fki_externalbroker_id_isValid;

    m_fki_ezcomagent_id_isValid = ::OpenAPI::fromJsonValue(fki_ezcomagent_id, json[QString("fkiEzcomagentID")]);
    m_fki_ezcomagent_id_isSet = !json[QString("fkiEzcomagentID")].isNull() && m_fki_ezcomagent_id_isValid;

    m_fki_notary_id_isValid = ::OpenAPI::fromJsonValue(fki_notary_id, json[QString("fkiNotaryID")]);
    m_fki_notary_id_isSet = !json[QString("fkiNotaryID")].isNull() && m_fki_notary_id_isValid;

    m_fki_rewardmember_id_isValid = ::OpenAPI::fromJsonValue(fki_rewardmember_id, json[QString("fkiRewardmemberID")]);
    m_fki_rewardmember_id_isSet = !json[QString("fkiRewardmemberID")].isNull() && m_fki_rewardmember_id_isValid;

    m_fki_supplier_id_isValid = ::OpenAPI::fromJsonValue(fki_supplier_id, json[QString("fkiSupplierID")]);
    m_fki_supplier_id_isSet = !json[QString("fkiSupplierID")].isNull() && m_fki_supplier_id_isValid;

    m_e_communicationrecipient_type_isValid = ::OpenAPI::fromJsonValue(e_communicationrecipient_type, json[QString("eCommunicationrecipientType")]);
    m_e_communicationrecipient_type_isSet = !json[QString("eCommunicationrecipientType")].isNull() && m_e_communicationrecipient_type_isValid;

    m_obj_descriptionstatic_isValid = ::OpenAPI::fromJsonValue(obj_descriptionstatic, json[QString("objDescriptionstatic")]);
    m_obj_descriptionstatic_isSet = !json[QString("objDescriptionstatic")].isNull() && m_obj_descriptionstatic_isValid;

    m_obj_emailstatic_isValid = ::OpenAPI::fromJsonValue(obj_emailstatic, json[QString("objEmailstatic")]);
    m_obj_emailstatic_isSet = !json[QString("objEmailstatic")].isNull() && m_obj_emailstatic_isValid;

    m_obj_phonestatic_isValid = ::OpenAPI::fromJsonValue(obj_phonestatic, json[QString("objPhonestatic")]);
    m_obj_phonestatic_isSet = !json[QString("objPhonestatic")].isNull() && m_obj_phonestatic_isValid;
}

QString OAICommunicationrecipient_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommunicationrecipient_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_communicationrecipient_id_isSet) {
        obj.insert(QString("pkiCommunicationrecipientID"), ::OpenAPI::toJsonValue(pki_communicationrecipient_id));
    }
    if (e_communicationrecipient_objecttype.isSet()) {
        obj.insert(QString("eCommunicationrecipientObjecttype"), ::OpenAPI::toJsonValue(e_communicationrecipient_objecttype));
    }
    if (m_fki_agent_id_isSet) {
        obj.insert(QString("fkiAgentID"), ::OpenAPI::toJsonValue(fki_agent_id));
    }
    if (m_fki_broker_id_isSet) {
        obj.insert(QString("fkiBrokerID"), ::OpenAPI::toJsonValue(fki_broker_id));
    }
    if (m_fki_contact_id_isSet) {
        obj.insert(QString("fkiContactID"), ::OpenAPI::toJsonValue(fki_contact_id));
    }
    if (m_fki_customer_id_isSet) {
        obj.insert(QString("fkiCustomerID"), ::OpenAPI::toJsonValue(fki_customer_id));
    }
    if (m_fki_employee_id_isSet) {
        obj.insert(QString("fkiEmployeeID"), ::OpenAPI::toJsonValue(fki_employee_id));
    }
    if (m_fki_ezsignsigner_id_isSet) {
        obj.insert(QString("fkiEzsignsignerID"), ::OpenAPI::toJsonValue(fki_ezsignsigner_id));
    }
    if (m_fki_franchiseoffice_id_isSet) {
        obj.insert(QString("fkiFranchiseofficeID"), ::OpenAPI::toJsonValue(fki_franchiseoffice_id));
    }
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::OpenAPI::toJsonValue(fki_user_id));
    }
    if (m_fki_agentincorporation_id_isSet) {
        obj.insert(QString("fkiAgentincorporationID"), ::OpenAPI::toJsonValue(fki_agentincorporation_id));
    }
    if (m_fki_assistant_id_isSet) {
        obj.insert(QString("fkiAssistantID"), ::OpenAPI::toJsonValue(fki_assistant_id));
    }
    if (m_fki_externalbroker_id_isSet) {
        obj.insert(QString("fkiExternalbrokerID"), ::OpenAPI::toJsonValue(fki_externalbroker_id));
    }
    if (m_fki_ezcomagent_id_isSet) {
        obj.insert(QString("fkiEzcomagentID"), ::OpenAPI::toJsonValue(fki_ezcomagent_id));
    }
    if (m_fki_notary_id_isSet) {
        obj.insert(QString("fkiNotaryID"), ::OpenAPI::toJsonValue(fki_notary_id));
    }
    if (m_fki_rewardmember_id_isSet) {
        obj.insert(QString("fkiRewardmemberID"), ::OpenAPI::toJsonValue(fki_rewardmember_id));
    }
    if (m_fki_supplier_id_isSet) {
        obj.insert(QString("fkiSupplierID"), ::OpenAPI::toJsonValue(fki_supplier_id));
    }
    if (e_communicationrecipient_type.isSet()) {
        obj.insert(QString("eCommunicationrecipientType"), ::OpenAPI::toJsonValue(e_communicationrecipient_type));
    }
    if (obj_descriptionstatic.isSet()) {
        obj.insert(QString("objDescriptionstatic"), ::OpenAPI::toJsonValue(obj_descriptionstatic));
    }
    if (obj_emailstatic.isSet()) {
        obj.insert(QString("objEmailstatic"), ::OpenAPI::toJsonValue(obj_emailstatic));
    }
    if (obj_phonestatic.isSet()) {
        obj.insert(QString("objPhonestatic"), ::OpenAPI::toJsonValue(obj_phonestatic));
    }
    return obj;
}

qint32 OAICommunicationrecipient_Response::getPkiCommunicationrecipientId() const {
    return pki_communicationrecipient_id;
}
void OAICommunicationrecipient_Response::setPkiCommunicationrecipientId(const qint32 &pki_communicationrecipient_id) {
    this->pki_communicationrecipient_id = pki_communicationrecipient_id;
    this->m_pki_communicationrecipient_id_isSet = true;
}

bool OAICommunicationrecipient_Response::is_pki_communicationrecipient_id_Set() const{
    return m_pki_communicationrecipient_id_isSet;
}

bool OAICommunicationrecipient_Response::is_pki_communicationrecipient_id_Valid() const{
    return m_pki_communicationrecipient_id_isValid;
}

OAIField_eCommunicationrecipientObjecttype OAICommunicationrecipient_Response::getECommunicationrecipientObjecttype() const {
    return e_communicationrecipient_objecttype;
}
void OAICommunicationrecipient_Response::setECommunicationrecipientObjecttype(const OAIField_eCommunicationrecipientObjecttype &e_communicationrecipient_objecttype) {
    this->e_communicationrecipient_objecttype = e_communicationrecipient_objecttype;
    this->m_e_communicationrecipient_objecttype_isSet = true;
}

bool OAICommunicationrecipient_Response::is_e_communicationrecipient_objecttype_Set() const{
    return m_e_communicationrecipient_objecttype_isSet;
}

bool OAICommunicationrecipient_Response::is_e_communicationrecipient_objecttype_Valid() const{
    return m_e_communicationrecipient_objecttype_isValid;
}

qint32 OAICommunicationrecipient_Response::getFkiAgentId() const {
    return fki_agent_id;
}
void OAICommunicationrecipient_Response::setFkiAgentId(const qint32 &fki_agent_id) {
    this->fki_agent_id = fki_agent_id;
    this->m_fki_agent_id_isSet = true;
}

bool OAICommunicationrecipient_Response::is_fki_agent_id_Set() const{
    return m_fki_agent_id_isSet;
}

bool OAICommunicationrecipient_Response::is_fki_agent_id_Valid() const{
    return m_fki_agent_id_isValid;
}

qint32 OAICommunicationrecipient_Response::getFkiBrokerId() const {
    return fki_broker_id;
}
void OAICommunicationrecipient_Response::setFkiBrokerId(const qint32 &fki_broker_id) {
    this->fki_broker_id = fki_broker_id;
    this->m_fki_broker_id_isSet = true;
}

bool OAICommunicationrecipient_Response::is_fki_broker_id_Set() const{
    return m_fki_broker_id_isSet;
}

bool OAICommunicationrecipient_Response::is_fki_broker_id_Valid() const{
    return m_fki_broker_id_isValid;
}

qint32 OAICommunicationrecipient_Response::getFkiContactId() const {
    return fki_contact_id;
}
void OAICommunicationrecipient_Response::setFkiContactId(const qint32 &fki_contact_id) {
    this->fki_contact_id = fki_contact_id;
    this->m_fki_contact_id_isSet = true;
}

bool OAICommunicationrecipient_Response::is_fki_contact_id_Set() const{
    return m_fki_contact_id_isSet;
}

bool OAICommunicationrecipient_Response::is_fki_contact_id_Valid() const{
    return m_fki_contact_id_isValid;
}

qint32 OAICommunicationrecipient_Response::getFkiCustomerId() const {
    return fki_customer_id;
}
void OAICommunicationrecipient_Response::setFkiCustomerId(const qint32 &fki_customer_id) {
    this->fki_customer_id = fki_customer_id;
    this->m_fki_customer_id_isSet = true;
}

bool OAICommunicationrecipient_Response::is_fki_customer_id_Set() const{
    return m_fki_customer_id_isSet;
}

bool OAICommunicationrecipient_Response::is_fki_customer_id_Valid() const{
    return m_fki_customer_id_isValid;
}

qint32 OAICommunicationrecipient_Response::getFkiEmployeeId() const {
    return fki_employee_id;
}
void OAICommunicationrecipient_Response::setFkiEmployeeId(const qint32 &fki_employee_id) {
    this->fki_employee_id = fki_employee_id;
    this->m_fki_employee_id_isSet = true;
}

bool OAICommunicationrecipient_Response::is_fki_employee_id_Set() const{
    return m_fki_employee_id_isSet;
}

bool OAICommunicationrecipient_Response::is_fki_employee_id_Valid() const{
    return m_fki_employee_id_isValid;
}

qint32 OAICommunicationrecipient_Response::getFkiEzsignsignerId() const {
    return fki_ezsignsigner_id;
}
void OAICommunicationrecipient_Response::setFkiEzsignsignerId(const qint32 &fki_ezsignsigner_id) {
    this->fki_ezsignsigner_id = fki_ezsignsigner_id;
    this->m_fki_ezsignsigner_id_isSet = true;
}

bool OAICommunicationrecipient_Response::is_fki_ezsignsigner_id_Set() const{
    return m_fki_ezsignsigner_id_isSet;
}

bool OAICommunicationrecipient_Response::is_fki_ezsignsigner_id_Valid() const{
    return m_fki_ezsignsigner_id_isValid;
}

qint32 OAICommunicationrecipient_Response::getFkiFranchiseofficeId() const {
    return fki_franchiseoffice_id;
}
void OAICommunicationrecipient_Response::setFkiFranchiseofficeId(const qint32 &fki_franchiseoffice_id) {
    this->fki_franchiseoffice_id = fki_franchiseoffice_id;
    this->m_fki_franchiseoffice_id_isSet = true;
}

bool OAICommunicationrecipient_Response::is_fki_franchiseoffice_id_Set() const{
    return m_fki_franchiseoffice_id_isSet;
}

bool OAICommunicationrecipient_Response::is_fki_franchiseoffice_id_Valid() const{
    return m_fki_franchiseoffice_id_isValid;
}

qint32 OAICommunicationrecipient_Response::getFkiUserId() const {
    return fki_user_id;
}
void OAICommunicationrecipient_Response::setFkiUserId(const qint32 &fki_user_id) {
    this->fki_user_id = fki_user_id;
    this->m_fki_user_id_isSet = true;
}

bool OAICommunicationrecipient_Response::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool OAICommunicationrecipient_Response::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

qint32 OAICommunicationrecipient_Response::getFkiAgentincorporationId() const {
    return fki_agentincorporation_id;
}
void OAICommunicationrecipient_Response::setFkiAgentincorporationId(const qint32 &fki_agentincorporation_id) {
    this->fki_agentincorporation_id = fki_agentincorporation_id;
    this->m_fki_agentincorporation_id_isSet = true;
}

bool OAICommunicationrecipient_Response::is_fki_agentincorporation_id_Set() const{
    return m_fki_agentincorporation_id_isSet;
}

bool OAICommunicationrecipient_Response::is_fki_agentincorporation_id_Valid() const{
    return m_fki_agentincorporation_id_isValid;
}

qint32 OAICommunicationrecipient_Response::getFkiAssistantId() const {
    return fki_assistant_id;
}
void OAICommunicationrecipient_Response::setFkiAssistantId(const qint32 &fki_assistant_id) {
    this->fki_assistant_id = fki_assistant_id;
    this->m_fki_assistant_id_isSet = true;
}

bool OAICommunicationrecipient_Response::is_fki_assistant_id_Set() const{
    return m_fki_assistant_id_isSet;
}

bool OAICommunicationrecipient_Response::is_fki_assistant_id_Valid() const{
    return m_fki_assistant_id_isValid;
}

qint32 OAICommunicationrecipient_Response::getFkiExternalbrokerId() const {
    return fki_externalbroker_id;
}
void OAICommunicationrecipient_Response::setFkiExternalbrokerId(const qint32 &fki_externalbroker_id) {
    this->fki_externalbroker_id = fki_externalbroker_id;
    this->m_fki_externalbroker_id_isSet = true;
}

bool OAICommunicationrecipient_Response::is_fki_externalbroker_id_Set() const{
    return m_fki_externalbroker_id_isSet;
}

bool OAICommunicationrecipient_Response::is_fki_externalbroker_id_Valid() const{
    return m_fki_externalbroker_id_isValid;
}

qint32 OAICommunicationrecipient_Response::getFkiEzcomagentId() const {
    return fki_ezcomagent_id;
}
void OAICommunicationrecipient_Response::setFkiEzcomagentId(const qint32 &fki_ezcomagent_id) {
    this->fki_ezcomagent_id = fki_ezcomagent_id;
    this->m_fki_ezcomagent_id_isSet = true;
}

bool OAICommunicationrecipient_Response::is_fki_ezcomagent_id_Set() const{
    return m_fki_ezcomagent_id_isSet;
}

bool OAICommunicationrecipient_Response::is_fki_ezcomagent_id_Valid() const{
    return m_fki_ezcomagent_id_isValid;
}

qint32 OAICommunicationrecipient_Response::getFkiNotaryId() const {
    return fki_notary_id;
}
void OAICommunicationrecipient_Response::setFkiNotaryId(const qint32 &fki_notary_id) {
    this->fki_notary_id = fki_notary_id;
    this->m_fki_notary_id_isSet = true;
}

bool OAICommunicationrecipient_Response::is_fki_notary_id_Set() const{
    return m_fki_notary_id_isSet;
}

bool OAICommunicationrecipient_Response::is_fki_notary_id_Valid() const{
    return m_fki_notary_id_isValid;
}

qint32 OAICommunicationrecipient_Response::getFkiRewardmemberId() const {
    return fki_rewardmember_id;
}
void OAICommunicationrecipient_Response::setFkiRewardmemberId(const qint32 &fki_rewardmember_id) {
    this->fki_rewardmember_id = fki_rewardmember_id;
    this->m_fki_rewardmember_id_isSet = true;
}

bool OAICommunicationrecipient_Response::is_fki_rewardmember_id_Set() const{
    return m_fki_rewardmember_id_isSet;
}

bool OAICommunicationrecipient_Response::is_fki_rewardmember_id_Valid() const{
    return m_fki_rewardmember_id_isValid;
}

qint32 OAICommunicationrecipient_Response::getFkiSupplierId() const {
    return fki_supplier_id;
}
void OAICommunicationrecipient_Response::setFkiSupplierId(const qint32 &fki_supplier_id) {
    this->fki_supplier_id = fki_supplier_id;
    this->m_fki_supplier_id_isSet = true;
}

bool OAICommunicationrecipient_Response::is_fki_supplier_id_Set() const{
    return m_fki_supplier_id_isSet;
}

bool OAICommunicationrecipient_Response::is_fki_supplier_id_Valid() const{
    return m_fki_supplier_id_isValid;
}

OAIField_eCommunicationrecipientType OAICommunicationrecipient_Response::getECommunicationrecipientType() const {
    return e_communicationrecipient_type;
}
void OAICommunicationrecipient_Response::setECommunicationrecipientType(const OAIField_eCommunicationrecipientType &e_communicationrecipient_type) {
    this->e_communicationrecipient_type = e_communicationrecipient_type;
    this->m_e_communicationrecipient_type_isSet = true;
}

bool OAICommunicationrecipient_Response::is_e_communicationrecipient_type_Set() const{
    return m_e_communicationrecipient_type_isSet;
}

bool OAICommunicationrecipient_Response::is_e_communicationrecipient_type_Valid() const{
    return m_e_communicationrecipient_type_isValid;
}

OAIDescriptionstatic_ResponseCompound OAICommunicationrecipient_Response::getObjDescriptionstatic() const {
    return obj_descriptionstatic;
}
void OAICommunicationrecipient_Response::setObjDescriptionstatic(const OAIDescriptionstatic_ResponseCompound &obj_descriptionstatic) {
    this->obj_descriptionstatic = obj_descriptionstatic;
    this->m_obj_descriptionstatic_isSet = true;
}

bool OAICommunicationrecipient_Response::is_obj_descriptionstatic_Set() const{
    return m_obj_descriptionstatic_isSet;
}

bool OAICommunicationrecipient_Response::is_obj_descriptionstatic_Valid() const{
    return m_obj_descriptionstatic_isValid;
}

OAIEmailstatic_ResponseCompound OAICommunicationrecipient_Response::getObjEmailstatic() const {
    return obj_emailstatic;
}
void OAICommunicationrecipient_Response::setObjEmailstatic(const OAIEmailstatic_ResponseCompound &obj_emailstatic) {
    this->obj_emailstatic = obj_emailstatic;
    this->m_obj_emailstatic_isSet = true;
}

bool OAICommunicationrecipient_Response::is_obj_emailstatic_Set() const{
    return m_obj_emailstatic_isSet;
}

bool OAICommunicationrecipient_Response::is_obj_emailstatic_Valid() const{
    return m_obj_emailstatic_isValid;
}

OAIPhonestatic_ResponseCompound OAICommunicationrecipient_Response::getObjPhonestatic() const {
    return obj_phonestatic;
}
void OAICommunicationrecipient_Response::setObjPhonestatic(const OAIPhonestatic_ResponseCompound &obj_phonestatic) {
    this->obj_phonestatic = obj_phonestatic;
    this->m_obj_phonestatic_isSet = true;
}

bool OAICommunicationrecipient_Response::is_obj_phonestatic_Set() const{
    return m_obj_phonestatic_isSet;
}

bool OAICommunicationrecipient_Response::is_obj_phonestatic_Valid() const{
    return m_obj_phonestatic_isValid;
}

bool OAICommunicationrecipient_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_communicationrecipient_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_communicationrecipient_objecttype.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_agent_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_broker_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_contact_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_customer_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_employee_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignsigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_franchiseoffice_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_agentincorporation_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_assistant_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_externalbroker_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezcomagent_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_notary_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_rewardmember_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_supplier_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_communicationrecipient_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_descriptionstatic.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_emailstatic.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_phonestatic.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommunicationrecipient_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_communicationrecipient_id_isValid && m_e_communicationrecipient_type_isValid && m_obj_descriptionstatic_isValid && true;
}

} // namespace OpenAPI
