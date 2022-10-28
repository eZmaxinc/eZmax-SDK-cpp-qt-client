/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzmaxinvoicingagent_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzmaxinvoicingagent_Response::OAIEzmaxinvoicingagent_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzmaxinvoicingagent_Response::OAIEzmaxinvoicingagent_Response() {
    this->initializeModel();
}

OAIEzmaxinvoicingagent_Response::~OAIEzmaxinvoicingagent_Response() {}

void OAIEzmaxinvoicingagent_Response::initializeModel() {

    m_pki_ezmaxinvoicingagent_id_isSet = false;
    m_pki_ezmaxinvoicingagent_id_isValid = false;

    m_fki_ezmaxinvoicing_id_isSet = false;
    m_fki_ezmaxinvoicing_id_isValid = false;

    m_fki_billingentityinternal_id_isSet = false;
    m_fki_billingentityinternal_id_isValid = false;

    m_s_billingentityinternal_description_x_isSet = false;
    m_s_billingentityinternal_description_x_isValid = false;

    m_fki_agent_id_isSet = false;
    m_fki_agent_id_isValid = false;

    m_fki_broker_id_isSet = false;
    m_fki_broker_id_isValid = false;

    m_i_ezmaxinvoicingagent_session_isSet = false;
    m_i_ezmaxinvoicingagent_session_isValid = false;

    m_i_ezmaxinvoicingagent_cloned_isSet = false;
    m_i_ezmaxinvoicingagent_cloned_isValid = false;

    m_i_ezmaxinvoicingagent_invoice_isSet = false;
    m_i_ezmaxinvoicingagent_invoice_isValid = false;

    m_i_ezmaxinvoicingagent_inscription_isSet = false;
    m_i_ezmaxinvoicingagent_inscription_isValid = false;

    m_i_ezmaxinvoicingagent_inscriptionactive_isSet = false;
    m_i_ezmaxinvoicingagent_inscriptionactive_isValid = false;

    m_i_ezmaxinvoicingagent_sale_isSet = false;
    m_i_ezmaxinvoicingagent_sale_isValid = false;

    m_i_ezmaxinvoicingagent_otherincome_isSet = false;
    m_i_ezmaxinvoicingagent_otherincome_isValid = false;

    m_i_ezmaxinvoicingagent_commissioncalculation_isSet = false;
    m_i_ezmaxinvoicingagent_commissioncalculation_isValid = false;

    m_i_ezmaxinvoicingagent_ezsigndocument_isSet = false;
    m_i_ezmaxinvoicingagent_ezsigndocument_isValid = false;

    m_b_ezmaxinvoicingagent_ezsignaccount_isSet = false;
    m_b_ezmaxinvoicingagent_ezsignaccount_isValid = false;

    m_b_ezmaxinvoicingagent_billableezmax_isSet = false;
    m_b_ezmaxinvoicingagent_billableezmax_isValid = false;

    m_e_ezmaxinvoicingagent_variationezmax_isSet = false;
    m_e_ezmaxinvoicingagent_variationezmax_isValid = false;

    m_b_ezmaxinvoicingagent_billableezsign_isSet = false;
    m_b_ezmaxinvoicingagent_billableezsign_isValid = false;

    m_e_ezmaxinvoicingagent_variationezsign_isSet = false;
    m_e_ezmaxinvoicingagent_variationezsign_isValid = false;
}

void OAIEzmaxinvoicingagent_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzmaxinvoicingagent_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezmaxinvoicingagent_id_isValid = ::OpenAPI::fromJsonValue(pki_ezmaxinvoicingagent_id, json[QString("pkiEzmaxinvoicingagentID")]);
    m_pki_ezmaxinvoicingagent_id_isSet = !json[QString("pkiEzmaxinvoicingagentID")].isNull() && m_pki_ezmaxinvoicingagent_id_isValid;

    m_fki_ezmaxinvoicing_id_isValid = ::OpenAPI::fromJsonValue(fki_ezmaxinvoicing_id, json[QString("fkiEzmaxinvoicingID")]);
    m_fki_ezmaxinvoicing_id_isSet = !json[QString("fkiEzmaxinvoicingID")].isNull() && m_fki_ezmaxinvoicing_id_isValid;

    m_fki_billingentityinternal_id_isValid = ::OpenAPI::fromJsonValue(fki_billingentityinternal_id, json[QString("fkiBillingentityinternalID")]);
    m_fki_billingentityinternal_id_isSet = !json[QString("fkiBillingentityinternalID")].isNull() && m_fki_billingentityinternal_id_isValid;

    m_s_billingentityinternal_description_x_isValid = ::OpenAPI::fromJsonValue(s_billingentityinternal_description_x, json[QString("sBillingentityinternalDescriptionX")]);
    m_s_billingentityinternal_description_x_isSet = !json[QString("sBillingentityinternalDescriptionX")].isNull() && m_s_billingentityinternal_description_x_isValid;

    m_fki_agent_id_isValid = ::OpenAPI::fromJsonValue(fki_agent_id, json[QString("fkiAgentID")]);
    m_fki_agent_id_isSet = !json[QString("fkiAgentID")].isNull() && m_fki_agent_id_isValid;

    m_fki_broker_id_isValid = ::OpenAPI::fromJsonValue(fki_broker_id, json[QString("fkiBrokerID")]);
    m_fki_broker_id_isSet = !json[QString("fkiBrokerID")].isNull() && m_fki_broker_id_isValid;

    m_i_ezmaxinvoicingagent_session_isValid = ::OpenAPI::fromJsonValue(i_ezmaxinvoicingagent_session, json[QString("iEzmaxinvoicingagentSession")]);
    m_i_ezmaxinvoicingagent_session_isSet = !json[QString("iEzmaxinvoicingagentSession")].isNull() && m_i_ezmaxinvoicingagent_session_isValid;

    m_i_ezmaxinvoicingagent_cloned_isValid = ::OpenAPI::fromJsonValue(i_ezmaxinvoicingagent_cloned, json[QString("iEzmaxinvoicingagentCloned")]);
    m_i_ezmaxinvoicingagent_cloned_isSet = !json[QString("iEzmaxinvoicingagentCloned")].isNull() && m_i_ezmaxinvoicingagent_cloned_isValid;

    m_i_ezmaxinvoicingagent_invoice_isValid = ::OpenAPI::fromJsonValue(i_ezmaxinvoicingagent_invoice, json[QString("iEzmaxinvoicingagentInvoice")]);
    m_i_ezmaxinvoicingagent_invoice_isSet = !json[QString("iEzmaxinvoicingagentInvoice")].isNull() && m_i_ezmaxinvoicingagent_invoice_isValid;

    m_i_ezmaxinvoicingagent_inscription_isValid = ::OpenAPI::fromJsonValue(i_ezmaxinvoicingagent_inscription, json[QString("iEzmaxinvoicingagentInscription")]);
    m_i_ezmaxinvoicingagent_inscription_isSet = !json[QString("iEzmaxinvoicingagentInscription")].isNull() && m_i_ezmaxinvoicingagent_inscription_isValid;

    m_i_ezmaxinvoicingagent_inscriptionactive_isValid = ::OpenAPI::fromJsonValue(i_ezmaxinvoicingagent_inscriptionactive, json[QString("iEzmaxinvoicingagentInscriptionactive")]);
    m_i_ezmaxinvoicingagent_inscriptionactive_isSet = !json[QString("iEzmaxinvoicingagentInscriptionactive")].isNull() && m_i_ezmaxinvoicingagent_inscriptionactive_isValid;

    m_i_ezmaxinvoicingagent_sale_isValid = ::OpenAPI::fromJsonValue(i_ezmaxinvoicingagent_sale, json[QString("iEzmaxinvoicingagentSale")]);
    m_i_ezmaxinvoicingagent_sale_isSet = !json[QString("iEzmaxinvoicingagentSale")].isNull() && m_i_ezmaxinvoicingagent_sale_isValid;

    m_i_ezmaxinvoicingagent_otherincome_isValid = ::OpenAPI::fromJsonValue(i_ezmaxinvoicingagent_otherincome, json[QString("iEzmaxinvoicingagentOtherincome")]);
    m_i_ezmaxinvoicingagent_otherincome_isSet = !json[QString("iEzmaxinvoicingagentOtherincome")].isNull() && m_i_ezmaxinvoicingagent_otherincome_isValid;

    m_i_ezmaxinvoicingagent_commissioncalculation_isValid = ::OpenAPI::fromJsonValue(i_ezmaxinvoicingagent_commissioncalculation, json[QString("iEzmaxinvoicingagentCommissioncalculation")]);
    m_i_ezmaxinvoicingagent_commissioncalculation_isSet = !json[QString("iEzmaxinvoicingagentCommissioncalculation")].isNull() && m_i_ezmaxinvoicingagent_commissioncalculation_isValid;

    m_i_ezmaxinvoicingagent_ezsigndocument_isValid = ::OpenAPI::fromJsonValue(i_ezmaxinvoicingagent_ezsigndocument, json[QString("iEzmaxinvoicingagentEzsigndocument")]);
    m_i_ezmaxinvoicingagent_ezsigndocument_isSet = !json[QString("iEzmaxinvoicingagentEzsigndocument")].isNull() && m_i_ezmaxinvoicingagent_ezsigndocument_isValid;

    m_b_ezmaxinvoicingagent_ezsignaccount_isValid = ::OpenAPI::fromJsonValue(b_ezmaxinvoicingagent_ezsignaccount, json[QString("bEzmaxinvoicingagentEzsignaccount")]);
    m_b_ezmaxinvoicingagent_ezsignaccount_isSet = !json[QString("bEzmaxinvoicingagentEzsignaccount")].isNull() && m_b_ezmaxinvoicingagent_ezsignaccount_isValid;

    m_b_ezmaxinvoicingagent_billableezmax_isValid = ::OpenAPI::fromJsonValue(b_ezmaxinvoicingagent_billableezmax, json[QString("bEzmaxinvoicingagentBillableezmax")]);
    m_b_ezmaxinvoicingagent_billableezmax_isSet = !json[QString("bEzmaxinvoicingagentBillableezmax")].isNull() && m_b_ezmaxinvoicingagent_billableezmax_isValid;

    m_e_ezmaxinvoicingagent_variationezmax_isValid = ::OpenAPI::fromJsonValue(e_ezmaxinvoicingagent_variationezmax, json[QString("eEzmaxinvoicingagentVariationezmax")]);
    m_e_ezmaxinvoicingagent_variationezmax_isSet = !json[QString("eEzmaxinvoicingagentVariationezmax")].isNull() && m_e_ezmaxinvoicingagent_variationezmax_isValid;

    m_b_ezmaxinvoicingagent_billableezsign_isValid = ::OpenAPI::fromJsonValue(b_ezmaxinvoicingagent_billableezsign, json[QString("bEzmaxinvoicingagentBillableezsign")]);
    m_b_ezmaxinvoicingagent_billableezsign_isSet = !json[QString("bEzmaxinvoicingagentBillableezsign")].isNull() && m_b_ezmaxinvoicingagent_billableezsign_isValid;

    m_e_ezmaxinvoicingagent_variationezsign_isValid = ::OpenAPI::fromJsonValue(e_ezmaxinvoicingagent_variationezsign, json[QString("eEzmaxinvoicingagentVariationezsign")]);
    m_e_ezmaxinvoicingagent_variationezsign_isSet = !json[QString("eEzmaxinvoicingagentVariationezsign")].isNull() && m_e_ezmaxinvoicingagent_variationezsign_isValid;
}

QString OAIEzmaxinvoicingagent_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzmaxinvoicingagent_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezmaxinvoicingagent_id_isSet) {
        obj.insert(QString("pkiEzmaxinvoicingagentID"), ::OpenAPI::toJsonValue(pki_ezmaxinvoicingagent_id));
    }
    if (m_fki_ezmaxinvoicing_id_isSet) {
        obj.insert(QString("fkiEzmaxinvoicingID"), ::OpenAPI::toJsonValue(fki_ezmaxinvoicing_id));
    }
    if (m_fki_billingentityinternal_id_isSet) {
        obj.insert(QString("fkiBillingentityinternalID"), ::OpenAPI::toJsonValue(fki_billingentityinternal_id));
    }
    if (m_s_billingentityinternal_description_x_isSet) {
        obj.insert(QString("sBillingentityinternalDescriptionX"), ::OpenAPI::toJsonValue(s_billingentityinternal_description_x));
    }
    if (m_fki_agent_id_isSet) {
        obj.insert(QString("fkiAgentID"), ::OpenAPI::toJsonValue(fki_agent_id));
    }
    if (m_fki_broker_id_isSet) {
        obj.insert(QString("fkiBrokerID"), ::OpenAPI::toJsonValue(fki_broker_id));
    }
    if (m_i_ezmaxinvoicingagent_session_isSet) {
        obj.insert(QString("iEzmaxinvoicingagentSession"), ::OpenAPI::toJsonValue(i_ezmaxinvoicingagent_session));
    }
    if (m_i_ezmaxinvoicingagent_cloned_isSet) {
        obj.insert(QString("iEzmaxinvoicingagentCloned"), ::OpenAPI::toJsonValue(i_ezmaxinvoicingagent_cloned));
    }
    if (m_i_ezmaxinvoicingagent_invoice_isSet) {
        obj.insert(QString("iEzmaxinvoicingagentInvoice"), ::OpenAPI::toJsonValue(i_ezmaxinvoicingagent_invoice));
    }
    if (m_i_ezmaxinvoicingagent_inscription_isSet) {
        obj.insert(QString("iEzmaxinvoicingagentInscription"), ::OpenAPI::toJsonValue(i_ezmaxinvoicingagent_inscription));
    }
    if (m_i_ezmaxinvoicingagent_inscriptionactive_isSet) {
        obj.insert(QString("iEzmaxinvoicingagentInscriptionactive"), ::OpenAPI::toJsonValue(i_ezmaxinvoicingagent_inscriptionactive));
    }
    if (m_i_ezmaxinvoicingagent_sale_isSet) {
        obj.insert(QString("iEzmaxinvoicingagentSale"), ::OpenAPI::toJsonValue(i_ezmaxinvoicingagent_sale));
    }
    if (m_i_ezmaxinvoicingagent_otherincome_isSet) {
        obj.insert(QString("iEzmaxinvoicingagentOtherincome"), ::OpenAPI::toJsonValue(i_ezmaxinvoicingagent_otherincome));
    }
    if (m_i_ezmaxinvoicingagent_commissioncalculation_isSet) {
        obj.insert(QString("iEzmaxinvoicingagentCommissioncalculation"), ::OpenAPI::toJsonValue(i_ezmaxinvoicingagent_commissioncalculation));
    }
    if (m_i_ezmaxinvoicingagent_ezsigndocument_isSet) {
        obj.insert(QString("iEzmaxinvoicingagentEzsigndocument"), ::OpenAPI::toJsonValue(i_ezmaxinvoicingagent_ezsigndocument));
    }
    if (m_b_ezmaxinvoicingagent_ezsignaccount_isSet) {
        obj.insert(QString("bEzmaxinvoicingagentEzsignaccount"), ::OpenAPI::toJsonValue(b_ezmaxinvoicingagent_ezsignaccount));
    }
    if (m_b_ezmaxinvoicingagent_billableezmax_isSet) {
        obj.insert(QString("bEzmaxinvoicingagentBillableezmax"), ::OpenAPI::toJsonValue(b_ezmaxinvoicingagent_billableezmax));
    }
    if (e_ezmaxinvoicingagent_variationezmax.isSet()) {
        obj.insert(QString("eEzmaxinvoicingagentVariationezmax"), ::OpenAPI::toJsonValue(e_ezmaxinvoicingagent_variationezmax));
    }
    if (m_b_ezmaxinvoicingagent_billableezsign_isSet) {
        obj.insert(QString("bEzmaxinvoicingagentBillableezsign"), ::OpenAPI::toJsonValue(b_ezmaxinvoicingagent_billableezsign));
    }
    if (e_ezmaxinvoicingagent_variationezsign.isSet()) {
        obj.insert(QString("eEzmaxinvoicingagentVariationezsign"), ::OpenAPI::toJsonValue(e_ezmaxinvoicingagent_variationezsign));
    }
    return obj;
}

qint32 OAIEzmaxinvoicingagent_Response::getPkiEzmaxinvoicingagentId() const {
    return pki_ezmaxinvoicingagent_id;
}
void OAIEzmaxinvoicingagent_Response::setPkiEzmaxinvoicingagentId(const qint32 &pki_ezmaxinvoicingagent_id) {
    this->pki_ezmaxinvoicingagent_id = pki_ezmaxinvoicingagent_id;
    this->m_pki_ezmaxinvoicingagent_id_isSet = true;
}

bool OAIEzmaxinvoicingagent_Response::is_pki_ezmaxinvoicingagent_id_Set() const{
    return m_pki_ezmaxinvoicingagent_id_isSet;
}

bool OAIEzmaxinvoicingagent_Response::is_pki_ezmaxinvoicingagent_id_Valid() const{
    return m_pki_ezmaxinvoicingagent_id_isValid;
}

qint32 OAIEzmaxinvoicingagent_Response::getFkiEzmaxinvoicingId() const {
    return fki_ezmaxinvoicing_id;
}
void OAIEzmaxinvoicingagent_Response::setFkiEzmaxinvoicingId(const qint32 &fki_ezmaxinvoicing_id) {
    this->fki_ezmaxinvoicing_id = fki_ezmaxinvoicing_id;
    this->m_fki_ezmaxinvoicing_id_isSet = true;
}

bool OAIEzmaxinvoicingagent_Response::is_fki_ezmaxinvoicing_id_Set() const{
    return m_fki_ezmaxinvoicing_id_isSet;
}

bool OAIEzmaxinvoicingagent_Response::is_fki_ezmaxinvoicing_id_Valid() const{
    return m_fki_ezmaxinvoicing_id_isValid;
}

qint32 OAIEzmaxinvoicingagent_Response::getFkiBillingentityinternalId() const {
    return fki_billingentityinternal_id;
}
void OAIEzmaxinvoicingagent_Response::setFkiBillingentityinternalId(const qint32 &fki_billingentityinternal_id) {
    this->fki_billingentityinternal_id = fki_billingentityinternal_id;
    this->m_fki_billingentityinternal_id_isSet = true;
}

bool OAIEzmaxinvoicingagent_Response::is_fki_billingentityinternal_id_Set() const{
    return m_fki_billingentityinternal_id_isSet;
}

bool OAIEzmaxinvoicingagent_Response::is_fki_billingentityinternal_id_Valid() const{
    return m_fki_billingentityinternal_id_isValid;
}

QString OAIEzmaxinvoicingagent_Response::getSBillingentityinternalDescriptionX() const {
    return s_billingentityinternal_description_x;
}
void OAIEzmaxinvoicingagent_Response::setSBillingentityinternalDescriptionX(const QString &s_billingentityinternal_description_x) {
    this->s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    this->m_s_billingentityinternal_description_x_isSet = true;
}

bool OAIEzmaxinvoicingagent_Response::is_s_billingentityinternal_description_x_Set() const{
    return m_s_billingentityinternal_description_x_isSet;
}

bool OAIEzmaxinvoicingagent_Response::is_s_billingentityinternal_description_x_Valid() const{
    return m_s_billingentityinternal_description_x_isValid;
}

qint32 OAIEzmaxinvoicingagent_Response::getFkiAgentId() const {
    return fki_agent_id;
}
void OAIEzmaxinvoicingagent_Response::setFkiAgentId(const qint32 &fki_agent_id) {
    this->fki_agent_id = fki_agent_id;
    this->m_fki_agent_id_isSet = true;
}

bool OAIEzmaxinvoicingagent_Response::is_fki_agent_id_Set() const{
    return m_fki_agent_id_isSet;
}

bool OAIEzmaxinvoicingagent_Response::is_fki_agent_id_Valid() const{
    return m_fki_agent_id_isValid;
}

qint32 OAIEzmaxinvoicingagent_Response::getFkiBrokerId() const {
    return fki_broker_id;
}
void OAIEzmaxinvoicingagent_Response::setFkiBrokerId(const qint32 &fki_broker_id) {
    this->fki_broker_id = fki_broker_id;
    this->m_fki_broker_id_isSet = true;
}

bool OAIEzmaxinvoicingagent_Response::is_fki_broker_id_Set() const{
    return m_fki_broker_id_isSet;
}

bool OAIEzmaxinvoicingagent_Response::is_fki_broker_id_Valid() const{
    return m_fki_broker_id_isValid;
}

qint32 OAIEzmaxinvoicingagent_Response::getIEzmaxinvoicingagentSession() const {
    return i_ezmaxinvoicingagent_session;
}
void OAIEzmaxinvoicingagent_Response::setIEzmaxinvoicingagentSession(const qint32 &i_ezmaxinvoicingagent_session) {
    this->i_ezmaxinvoicingagent_session = i_ezmaxinvoicingagent_session;
    this->m_i_ezmaxinvoicingagent_session_isSet = true;
}

bool OAIEzmaxinvoicingagent_Response::is_i_ezmaxinvoicingagent_session_Set() const{
    return m_i_ezmaxinvoicingagent_session_isSet;
}

bool OAIEzmaxinvoicingagent_Response::is_i_ezmaxinvoicingagent_session_Valid() const{
    return m_i_ezmaxinvoicingagent_session_isValid;
}

qint32 OAIEzmaxinvoicingagent_Response::getIEzmaxinvoicingagentCloned() const {
    return i_ezmaxinvoicingagent_cloned;
}
void OAIEzmaxinvoicingagent_Response::setIEzmaxinvoicingagentCloned(const qint32 &i_ezmaxinvoicingagent_cloned) {
    this->i_ezmaxinvoicingagent_cloned = i_ezmaxinvoicingagent_cloned;
    this->m_i_ezmaxinvoicingagent_cloned_isSet = true;
}

bool OAIEzmaxinvoicingagent_Response::is_i_ezmaxinvoicingagent_cloned_Set() const{
    return m_i_ezmaxinvoicingagent_cloned_isSet;
}

bool OAIEzmaxinvoicingagent_Response::is_i_ezmaxinvoicingagent_cloned_Valid() const{
    return m_i_ezmaxinvoicingagent_cloned_isValid;
}

qint32 OAIEzmaxinvoicingagent_Response::getIEzmaxinvoicingagentInvoice() const {
    return i_ezmaxinvoicingagent_invoice;
}
void OAIEzmaxinvoicingagent_Response::setIEzmaxinvoicingagentInvoice(const qint32 &i_ezmaxinvoicingagent_invoice) {
    this->i_ezmaxinvoicingagent_invoice = i_ezmaxinvoicingagent_invoice;
    this->m_i_ezmaxinvoicingagent_invoice_isSet = true;
}

bool OAIEzmaxinvoicingagent_Response::is_i_ezmaxinvoicingagent_invoice_Set() const{
    return m_i_ezmaxinvoicingagent_invoice_isSet;
}

bool OAIEzmaxinvoicingagent_Response::is_i_ezmaxinvoicingagent_invoice_Valid() const{
    return m_i_ezmaxinvoicingagent_invoice_isValid;
}

qint32 OAIEzmaxinvoicingagent_Response::getIEzmaxinvoicingagentInscription() const {
    return i_ezmaxinvoicingagent_inscription;
}
void OAIEzmaxinvoicingagent_Response::setIEzmaxinvoicingagentInscription(const qint32 &i_ezmaxinvoicingagent_inscription) {
    this->i_ezmaxinvoicingagent_inscription = i_ezmaxinvoicingagent_inscription;
    this->m_i_ezmaxinvoicingagent_inscription_isSet = true;
}

bool OAIEzmaxinvoicingagent_Response::is_i_ezmaxinvoicingagent_inscription_Set() const{
    return m_i_ezmaxinvoicingagent_inscription_isSet;
}

bool OAIEzmaxinvoicingagent_Response::is_i_ezmaxinvoicingagent_inscription_Valid() const{
    return m_i_ezmaxinvoicingagent_inscription_isValid;
}

qint32 OAIEzmaxinvoicingagent_Response::getIEzmaxinvoicingagentInscriptionactive() const {
    return i_ezmaxinvoicingagent_inscriptionactive;
}
void OAIEzmaxinvoicingagent_Response::setIEzmaxinvoicingagentInscriptionactive(const qint32 &i_ezmaxinvoicingagent_inscriptionactive) {
    this->i_ezmaxinvoicingagent_inscriptionactive = i_ezmaxinvoicingagent_inscriptionactive;
    this->m_i_ezmaxinvoicingagent_inscriptionactive_isSet = true;
}

bool OAIEzmaxinvoicingagent_Response::is_i_ezmaxinvoicingagent_inscriptionactive_Set() const{
    return m_i_ezmaxinvoicingagent_inscriptionactive_isSet;
}

bool OAIEzmaxinvoicingagent_Response::is_i_ezmaxinvoicingagent_inscriptionactive_Valid() const{
    return m_i_ezmaxinvoicingagent_inscriptionactive_isValid;
}

qint32 OAIEzmaxinvoicingagent_Response::getIEzmaxinvoicingagentSale() const {
    return i_ezmaxinvoicingagent_sale;
}
void OAIEzmaxinvoicingagent_Response::setIEzmaxinvoicingagentSale(const qint32 &i_ezmaxinvoicingagent_sale) {
    this->i_ezmaxinvoicingagent_sale = i_ezmaxinvoicingagent_sale;
    this->m_i_ezmaxinvoicingagent_sale_isSet = true;
}

bool OAIEzmaxinvoicingagent_Response::is_i_ezmaxinvoicingagent_sale_Set() const{
    return m_i_ezmaxinvoicingagent_sale_isSet;
}

bool OAIEzmaxinvoicingagent_Response::is_i_ezmaxinvoicingagent_sale_Valid() const{
    return m_i_ezmaxinvoicingagent_sale_isValid;
}

qint32 OAIEzmaxinvoicingagent_Response::getIEzmaxinvoicingagentOtherincome() const {
    return i_ezmaxinvoicingagent_otherincome;
}
void OAIEzmaxinvoicingagent_Response::setIEzmaxinvoicingagentOtherincome(const qint32 &i_ezmaxinvoicingagent_otherincome) {
    this->i_ezmaxinvoicingagent_otherincome = i_ezmaxinvoicingagent_otherincome;
    this->m_i_ezmaxinvoicingagent_otherincome_isSet = true;
}

bool OAIEzmaxinvoicingagent_Response::is_i_ezmaxinvoicingagent_otherincome_Set() const{
    return m_i_ezmaxinvoicingagent_otherincome_isSet;
}

bool OAIEzmaxinvoicingagent_Response::is_i_ezmaxinvoicingagent_otherincome_Valid() const{
    return m_i_ezmaxinvoicingagent_otherincome_isValid;
}

qint32 OAIEzmaxinvoicingagent_Response::getIEzmaxinvoicingagentCommissioncalculation() const {
    return i_ezmaxinvoicingagent_commissioncalculation;
}
void OAIEzmaxinvoicingagent_Response::setIEzmaxinvoicingagentCommissioncalculation(const qint32 &i_ezmaxinvoicingagent_commissioncalculation) {
    this->i_ezmaxinvoicingagent_commissioncalculation = i_ezmaxinvoicingagent_commissioncalculation;
    this->m_i_ezmaxinvoicingagent_commissioncalculation_isSet = true;
}

bool OAIEzmaxinvoicingagent_Response::is_i_ezmaxinvoicingagent_commissioncalculation_Set() const{
    return m_i_ezmaxinvoicingagent_commissioncalculation_isSet;
}

bool OAIEzmaxinvoicingagent_Response::is_i_ezmaxinvoicingagent_commissioncalculation_Valid() const{
    return m_i_ezmaxinvoicingagent_commissioncalculation_isValid;
}

qint32 OAIEzmaxinvoicingagent_Response::getIEzmaxinvoicingagentEzsigndocument() const {
    return i_ezmaxinvoicingagent_ezsigndocument;
}
void OAIEzmaxinvoicingagent_Response::setIEzmaxinvoicingagentEzsigndocument(const qint32 &i_ezmaxinvoicingagent_ezsigndocument) {
    this->i_ezmaxinvoicingagent_ezsigndocument = i_ezmaxinvoicingagent_ezsigndocument;
    this->m_i_ezmaxinvoicingagent_ezsigndocument_isSet = true;
}

bool OAIEzmaxinvoicingagent_Response::is_i_ezmaxinvoicingagent_ezsigndocument_Set() const{
    return m_i_ezmaxinvoicingagent_ezsigndocument_isSet;
}

bool OAIEzmaxinvoicingagent_Response::is_i_ezmaxinvoicingagent_ezsigndocument_Valid() const{
    return m_i_ezmaxinvoicingagent_ezsigndocument_isValid;
}

bool OAIEzmaxinvoicingagent_Response::isBEzmaxinvoicingagentEzsignaccount() const {
    return b_ezmaxinvoicingagent_ezsignaccount;
}
void OAIEzmaxinvoicingagent_Response::setBEzmaxinvoicingagentEzsignaccount(const bool &b_ezmaxinvoicingagent_ezsignaccount) {
    this->b_ezmaxinvoicingagent_ezsignaccount = b_ezmaxinvoicingagent_ezsignaccount;
    this->m_b_ezmaxinvoicingagent_ezsignaccount_isSet = true;
}

bool OAIEzmaxinvoicingagent_Response::is_b_ezmaxinvoicingagent_ezsignaccount_Set() const{
    return m_b_ezmaxinvoicingagent_ezsignaccount_isSet;
}

bool OAIEzmaxinvoicingagent_Response::is_b_ezmaxinvoicingagent_ezsignaccount_Valid() const{
    return m_b_ezmaxinvoicingagent_ezsignaccount_isValid;
}

bool OAIEzmaxinvoicingagent_Response::isBEzmaxinvoicingagentBillableezmax() const {
    return b_ezmaxinvoicingagent_billableezmax;
}
void OAIEzmaxinvoicingagent_Response::setBEzmaxinvoicingagentBillableezmax(const bool &b_ezmaxinvoicingagent_billableezmax) {
    this->b_ezmaxinvoicingagent_billableezmax = b_ezmaxinvoicingagent_billableezmax;
    this->m_b_ezmaxinvoicingagent_billableezmax_isSet = true;
}

bool OAIEzmaxinvoicingagent_Response::is_b_ezmaxinvoicingagent_billableezmax_Set() const{
    return m_b_ezmaxinvoicingagent_billableezmax_isSet;
}

bool OAIEzmaxinvoicingagent_Response::is_b_ezmaxinvoicingagent_billableezmax_Valid() const{
    return m_b_ezmaxinvoicingagent_billableezmax_isValid;
}

OAIField_eEzmaxinvoicingagentVariationezmax OAIEzmaxinvoicingagent_Response::getEEzmaxinvoicingagentVariationezmax() const {
    return e_ezmaxinvoicingagent_variationezmax;
}
void OAIEzmaxinvoicingagent_Response::setEEzmaxinvoicingagentVariationezmax(const OAIField_eEzmaxinvoicingagentVariationezmax &e_ezmaxinvoicingagent_variationezmax) {
    this->e_ezmaxinvoicingagent_variationezmax = e_ezmaxinvoicingagent_variationezmax;
    this->m_e_ezmaxinvoicingagent_variationezmax_isSet = true;
}

bool OAIEzmaxinvoicingagent_Response::is_e_ezmaxinvoicingagent_variationezmax_Set() const{
    return m_e_ezmaxinvoicingagent_variationezmax_isSet;
}

bool OAIEzmaxinvoicingagent_Response::is_e_ezmaxinvoicingagent_variationezmax_Valid() const{
    return m_e_ezmaxinvoicingagent_variationezmax_isValid;
}

bool OAIEzmaxinvoicingagent_Response::isBEzmaxinvoicingagentBillableezsign() const {
    return b_ezmaxinvoicingagent_billableezsign;
}
void OAIEzmaxinvoicingagent_Response::setBEzmaxinvoicingagentBillableezsign(const bool &b_ezmaxinvoicingagent_billableezsign) {
    this->b_ezmaxinvoicingagent_billableezsign = b_ezmaxinvoicingagent_billableezsign;
    this->m_b_ezmaxinvoicingagent_billableezsign_isSet = true;
}

bool OAIEzmaxinvoicingagent_Response::is_b_ezmaxinvoicingagent_billableezsign_Set() const{
    return m_b_ezmaxinvoicingagent_billableezsign_isSet;
}

bool OAIEzmaxinvoicingagent_Response::is_b_ezmaxinvoicingagent_billableezsign_Valid() const{
    return m_b_ezmaxinvoicingagent_billableezsign_isValid;
}

OAIField_eEzmaxinvoicingagentVariationezsign OAIEzmaxinvoicingagent_Response::getEEzmaxinvoicingagentVariationezsign() const {
    return e_ezmaxinvoicingagent_variationezsign;
}
void OAIEzmaxinvoicingagent_Response::setEEzmaxinvoicingagentVariationezsign(const OAIField_eEzmaxinvoicingagentVariationezsign &e_ezmaxinvoicingagent_variationezsign) {
    this->e_ezmaxinvoicingagent_variationezsign = e_ezmaxinvoicingagent_variationezsign;
    this->m_e_ezmaxinvoicingagent_variationezsign_isSet = true;
}

bool OAIEzmaxinvoicingagent_Response::is_e_ezmaxinvoicingagent_variationezsign_Set() const{
    return m_e_ezmaxinvoicingagent_variationezsign_isSet;
}

bool OAIEzmaxinvoicingagent_Response::is_e_ezmaxinvoicingagent_variationezsign_Valid() const{
    return m_e_ezmaxinvoicingagent_variationezsign_isValid;
}

bool OAIEzmaxinvoicingagent_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezmaxinvoicingagent_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezmaxinvoicing_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_billingentityinternal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_billingentityinternal_description_x_isSet) {
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

        if (m_i_ezmaxinvoicingagent_session_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezmaxinvoicingagent_cloned_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezmaxinvoicingagent_invoice_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezmaxinvoicingagent_inscription_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezmaxinvoicingagent_inscriptionactive_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezmaxinvoicingagent_sale_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezmaxinvoicingagent_otherincome_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezmaxinvoicingagent_commissioncalculation_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezmaxinvoicingagent_ezsigndocument_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezmaxinvoicingagent_ezsignaccount_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezmaxinvoicingagent_billableezmax_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_ezmaxinvoicingagent_variationezmax.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezmaxinvoicingagent_billableezsign_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_ezmaxinvoicingagent_variationezsign.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzmaxinvoicingagent_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_billingentityinternal_id_isValid && m_s_billingentityinternal_description_x_isValid && m_i_ezmaxinvoicingagent_session_isValid && m_i_ezmaxinvoicingagent_cloned_isValid && m_i_ezmaxinvoicingagent_invoice_isValid && m_i_ezmaxinvoicingagent_inscription_isValid && m_i_ezmaxinvoicingagent_inscriptionactive_isValid && m_i_ezmaxinvoicingagent_sale_isValid && m_i_ezmaxinvoicingagent_otherincome_isValid && m_i_ezmaxinvoicingagent_commissioncalculation_isValid && m_i_ezmaxinvoicingagent_ezsigndocument_isValid && m_b_ezmaxinvoicingagent_ezsignaccount_isValid && m_b_ezmaxinvoicingagent_billableezmax_isValid && m_e_ezmaxinvoicingagent_variationezmax_isValid && m_b_ezmaxinvoicingagent_billableezsign_isValid && m_e_ezmaxinvoicingagent_variationezsign_isValid && true;
}

} // namespace OpenAPI
