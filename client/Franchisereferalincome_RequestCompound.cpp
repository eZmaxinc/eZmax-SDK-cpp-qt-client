/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Franchisereferalincome_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Franchisereferalincome_RequestCompound::Franchisereferalincome_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Franchisereferalincome_RequestCompound::Franchisereferalincome_RequestCompound() {
    this->initializeModel();
}

Franchisereferalincome_RequestCompound::~Franchisereferalincome_RequestCompound() {}

void Franchisereferalincome_RequestCompound::initializeModel() {

    m_pki_franchisereferalincome_id_isSet = false;
    m_pki_franchisereferalincome_id_isValid = false;

    m_fki_franchisebroker_id_isSet = false;
    m_fki_franchisebroker_id_isValid = false;

    m_fki_franchisereferalincomeprogram_id_isSet = false;
    m_fki_franchisereferalincomeprogram_id_isValid = false;

    m_fki_period_id_isSet = false;
    m_fki_period_id_isValid = false;

    m_d_franchisereferalincome_loan_isSet = false;
    m_d_franchisereferalincome_loan_isValid = false;

    m_d_franchisereferalincome_franchiseamount_isSet = false;
    m_d_franchisereferalincome_franchiseamount_isValid = false;

    m_d_franchisereferalincome_franchisoramount_isSet = false;
    m_d_franchisereferalincome_franchisoramount_isValid = false;

    m_d_franchisereferalincome_agentamount_isSet = false;
    m_d_franchisereferalincome_agentamount_isValid = false;

    m_dt_franchisereferalincome_disbursed_isSet = false;
    m_dt_franchisereferalincome_disbursed_isValid = false;

    m_t_franchisereferalincome_comment_isSet = false;
    m_t_franchisereferalincome_comment_isValid = false;

    m_fki_franchiseoffice_id_isSet = false;
    m_fki_franchiseoffice_id_isValid = false;

    m_s_franchisereferalincome_remoteid_isSet = false;
    m_s_franchisereferalincome_remoteid_isValid = false;

    m_obj_address_isSet = false;
    m_obj_address_isValid = false;

    m_a_obj_contact_isSet = false;
    m_a_obj_contact_isValid = false;
}

void Franchisereferalincome_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Franchisereferalincome_RequestCompound::fromJsonObject(QJsonObject json) {

    m_pki_franchisereferalincome_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_franchisereferalincome_id, json[QString("pkiFranchisereferalincomeID")]);
    m_pki_franchisereferalincome_id_isSet = !json[QString("pkiFranchisereferalincomeID")].isNull() && m_pki_franchisereferalincome_id_isValid;

    m_fki_franchisebroker_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_franchisebroker_id, json[QString("fkiFranchisebrokerID")]);
    m_fki_franchisebroker_id_isSet = !json[QString("fkiFranchisebrokerID")].isNull() && m_fki_franchisebroker_id_isValid;

    m_fki_franchisereferalincomeprogram_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_franchisereferalincomeprogram_id, json[QString("fkiFranchisereferalincomeprogramID")]);
    m_fki_franchisereferalincomeprogram_id_isSet = !json[QString("fkiFranchisereferalincomeprogramID")].isNull() && m_fki_franchisereferalincomeprogram_id_isValid;

    m_fki_period_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_period_id, json[QString("fkiPeriodID")]);
    m_fki_period_id_isSet = !json[QString("fkiPeriodID")].isNull() && m_fki_period_id_isValid;

    m_d_franchisereferalincome_loan_isValid = ::Ezmaxapi::fromJsonValue(m_d_franchisereferalincome_loan, json[QString("dFranchisereferalincomeLoan")]);
    m_d_franchisereferalincome_loan_isSet = !json[QString("dFranchisereferalincomeLoan")].isNull() && m_d_franchisereferalincome_loan_isValid;

    m_d_franchisereferalincome_franchiseamount_isValid = ::Ezmaxapi::fromJsonValue(m_d_franchisereferalincome_franchiseamount, json[QString("dFranchisereferalincomeFranchiseamount")]);
    m_d_franchisereferalincome_franchiseamount_isSet = !json[QString("dFranchisereferalincomeFranchiseamount")].isNull() && m_d_franchisereferalincome_franchiseamount_isValid;

    m_d_franchisereferalincome_franchisoramount_isValid = ::Ezmaxapi::fromJsonValue(m_d_franchisereferalincome_franchisoramount, json[QString("dFranchisereferalincomeFranchisoramount")]);
    m_d_franchisereferalincome_franchisoramount_isSet = !json[QString("dFranchisereferalincomeFranchisoramount")].isNull() && m_d_franchisereferalincome_franchisoramount_isValid;

    m_d_franchisereferalincome_agentamount_isValid = ::Ezmaxapi::fromJsonValue(m_d_franchisereferalincome_agentamount, json[QString("dFranchisereferalincomeAgentamount")]);
    m_d_franchisereferalincome_agentamount_isSet = !json[QString("dFranchisereferalincomeAgentamount")].isNull() && m_d_franchisereferalincome_agentamount_isValid;

    m_dt_franchisereferalincome_disbursed_isValid = ::Ezmaxapi::fromJsonValue(m_dt_franchisereferalincome_disbursed, json[QString("dtFranchisereferalincomeDisbursed")]);
    m_dt_franchisereferalincome_disbursed_isSet = !json[QString("dtFranchisereferalincomeDisbursed")].isNull() && m_dt_franchisereferalincome_disbursed_isValid;

    m_t_franchisereferalincome_comment_isValid = ::Ezmaxapi::fromJsonValue(m_t_franchisereferalincome_comment, json[QString("tFranchisereferalincomeComment")]);
    m_t_franchisereferalincome_comment_isSet = !json[QString("tFranchisereferalincomeComment")].isNull() && m_t_franchisereferalincome_comment_isValid;

    m_fki_franchiseoffice_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_franchiseoffice_id, json[QString("fkiFranchiseofficeID")]);
    m_fki_franchiseoffice_id_isSet = !json[QString("fkiFranchiseofficeID")].isNull() && m_fki_franchiseoffice_id_isValid;

    m_s_franchisereferalincome_remoteid_isValid = ::Ezmaxapi::fromJsonValue(m_s_franchisereferalincome_remoteid, json[QString("sFranchisereferalincomeRemoteid")]);
    m_s_franchisereferalincome_remoteid_isSet = !json[QString("sFranchisereferalincomeRemoteid")].isNull() && m_s_franchisereferalincome_remoteid_isValid;

    m_obj_address_isValid = ::Ezmaxapi::fromJsonValue(m_obj_address, json[QString("objAddress")]);
    m_obj_address_isSet = !json[QString("objAddress")].isNull() && m_obj_address_isValid;

    m_a_obj_contact_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_contact, json[QString("a_objContact")]);
    m_a_obj_contact_isSet = !json[QString("a_objContact")].isNull() && m_a_obj_contact_isValid;
}

QString Franchisereferalincome_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Franchisereferalincome_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_franchisereferalincome_id_isSet) {
        obj.insert(QString("pkiFranchisereferalincomeID"), ::Ezmaxapi::toJsonValue(m_pki_franchisereferalincome_id));
    }
    if (m_fki_franchisebroker_id_isSet) {
        obj.insert(QString("fkiFranchisebrokerID"), ::Ezmaxapi::toJsonValue(m_fki_franchisebroker_id));
    }
    if (m_fki_franchisereferalincomeprogram_id_isSet) {
        obj.insert(QString("fkiFranchisereferalincomeprogramID"), ::Ezmaxapi::toJsonValue(m_fki_franchisereferalincomeprogram_id));
    }
    if (m_fki_period_id_isSet) {
        obj.insert(QString("fkiPeriodID"), ::Ezmaxapi::toJsonValue(m_fki_period_id));
    }
    if (m_d_franchisereferalincome_loan_isSet) {
        obj.insert(QString("dFranchisereferalincomeLoan"), ::Ezmaxapi::toJsonValue(m_d_franchisereferalincome_loan));
    }
    if (m_d_franchisereferalincome_franchiseamount_isSet) {
        obj.insert(QString("dFranchisereferalincomeFranchiseamount"), ::Ezmaxapi::toJsonValue(m_d_franchisereferalincome_franchiseamount));
    }
    if (m_d_franchisereferalincome_franchisoramount_isSet) {
        obj.insert(QString("dFranchisereferalincomeFranchisoramount"), ::Ezmaxapi::toJsonValue(m_d_franchisereferalincome_franchisoramount));
    }
    if (m_d_franchisereferalincome_agentamount_isSet) {
        obj.insert(QString("dFranchisereferalincomeAgentamount"), ::Ezmaxapi::toJsonValue(m_d_franchisereferalincome_agentamount));
    }
    if (m_dt_franchisereferalincome_disbursed_isSet) {
        obj.insert(QString("dtFranchisereferalincomeDisbursed"), ::Ezmaxapi::toJsonValue(m_dt_franchisereferalincome_disbursed));
    }
    if (m_t_franchisereferalincome_comment_isSet) {
        obj.insert(QString("tFranchisereferalincomeComment"), ::Ezmaxapi::toJsonValue(m_t_franchisereferalincome_comment));
    }
    if (m_fki_franchiseoffice_id_isSet) {
        obj.insert(QString("fkiFranchiseofficeID"), ::Ezmaxapi::toJsonValue(m_fki_franchiseoffice_id));
    }
    if (m_s_franchisereferalincome_remoteid_isSet) {
        obj.insert(QString("sFranchisereferalincomeRemoteid"), ::Ezmaxapi::toJsonValue(m_s_franchisereferalincome_remoteid));
    }
    if (m_obj_address.isSet()) {
        obj.insert(QString("objAddress"), ::Ezmaxapi::toJsonValue(m_obj_address));
    }
    if (m_a_obj_contact.size() > 0) {
        obj.insert(QString("a_objContact"), ::Ezmaxapi::toJsonValue(m_a_obj_contact));
    }
    return obj;
}

qint32 Franchisereferalincome_RequestCompound::getPkiFranchisereferalincomeId() const {
    return m_pki_franchisereferalincome_id;
}
void Franchisereferalincome_RequestCompound::setPkiFranchisereferalincomeId(const qint32 &pki_franchisereferalincome_id) {
    m_pki_franchisereferalincome_id = pki_franchisereferalincome_id;
    m_pki_franchisereferalincome_id_isSet = true;
}

bool Franchisereferalincome_RequestCompound::is_pki_franchisereferalincome_id_Set() const{
    return m_pki_franchisereferalincome_id_isSet;
}

bool Franchisereferalincome_RequestCompound::is_pki_franchisereferalincome_id_Valid() const{
    return m_pki_franchisereferalincome_id_isValid;
}

qint32 Franchisereferalincome_RequestCompound::getFkiFranchisebrokerId() const {
    return m_fki_franchisebroker_id;
}
void Franchisereferalincome_RequestCompound::setFkiFranchisebrokerId(const qint32 &fki_franchisebroker_id) {
    m_fki_franchisebroker_id = fki_franchisebroker_id;
    m_fki_franchisebroker_id_isSet = true;
}

bool Franchisereferalincome_RequestCompound::is_fki_franchisebroker_id_Set() const{
    return m_fki_franchisebroker_id_isSet;
}

bool Franchisereferalincome_RequestCompound::is_fki_franchisebroker_id_Valid() const{
    return m_fki_franchisebroker_id_isValid;
}

qint32 Franchisereferalincome_RequestCompound::getFkiFranchisereferalincomeprogramId() const {
    return m_fki_franchisereferalincomeprogram_id;
}
void Franchisereferalincome_RequestCompound::setFkiFranchisereferalincomeprogramId(const qint32 &fki_franchisereferalincomeprogram_id) {
    m_fki_franchisereferalincomeprogram_id = fki_franchisereferalincomeprogram_id;
    m_fki_franchisereferalincomeprogram_id_isSet = true;
}

bool Franchisereferalincome_RequestCompound::is_fki_franchisereferalincomeprogram_id_Set() const{
    return m_fki_franchisereferalincomeprogram_id_isSet;
}

bool Franchisereferalincome_RequestCompound::is_fki_franchisereferalincomeprogram_id_Valid() const{
    return m_fki_franchisereferalincomeprogram_id_isValid;
}

qint32 Franchisereferalincome_RequestCompound::getFkiPeriodId() const {
    return m_fki_period_id;
}
void Franchisereferalincome_RequestCompound::setFkiPeriodId(const qint32 &fki_period_id) {
    m_fki_period_id = fki_period_id;
    m_fki_period_id_isSet = true;
}

bool Franchisereferalincome_RequestCompound::is_fki_period_id_Set() const{
    return m_fki_period_id_isSet;
}

bool Franchisereferalincome_RequestCompound::is_fki_period_id_Valid() const{
    return m_fki_period_id_isValid;
}

QString Franchisereferalincome_RequestCompound::getDFranchisereferalincomeLoan() const {
    return m_d_franchisereferalincome_loan;
}
void Franchisereferalincome_RequestCompound::setDFranchisereferalincomeLoan(const QString &d_franchisereferalincome_loan) {
    m_d_franchisereferalincome_loan = d_franchisereferalincome_loan;
    m_d_franchisereferalincome_loan_isSet = true;
}

bool Franchisereferalincome_RequestCompound::is_d_franchisereferalincome_loan_Set() const{
    return m_d_franchisereferalincome_loan_isSet;
}

bool Franchisereferalincome_RequestCompound::is_d_franchisereferalincome_loan_Valid() const{
    return m_d_franchisereferalincome_loan_isValid;
}

QString Franchisereferalincome_RequestCompound::getDFranchisereferalincomeFranchiseamount() const {
    return m_d_franchisereferalincome_franchiseamount;
}
void Franchisereferalincome_RequestCompound::setDFranchisereferalincomeFranchiseamount(const QString &d_franchisereferalincome_franchiseamount) {
    m_d_franchisereferalincome_franchiseamount = d_franchisereferalincome_franchiseamount;
    m_d_franchisereferalincome_franchiseamount_isSet = true;
}

bool Franchisereferalincome_RequestCompound::is_d_franchisereferalincome_franchiseamount_Set() const{
    return m_d_franchisereferalincome_franchiseamount_isSet;
}

bool Franchisereferalincome_RequestCompound::is_d_franchisereferalincome_franchiseamount_Valid() const{
    return m_d_franchisereferalincome_franchiseamount_isValid;
}

QString Franchisereferalincome_RequestCompound::getDFranchisereferalincomeFranchisoramount() const {
    return m_d_franchisereferalincome_franchisoramount;
}
void Franchisereferalincome_RequestCompound::setDFranchisereferalincomeFranchisoramount(const QString &d_franchisereferalincome_franchisoramount) {
    m_d_franchisereferalincome_franchisoramount = d_franchisereferalincome_franchisoramount;
    m_d_franchisereferalincome_franchisoramount_isSet = true;
}

bool Franchisereferalincome_RequestCompound::is_d_franchisereferalincome_franchisoramount_Set() const{
    return m_d_franchisereferalincome_franchisoramount_isSet;
}

bool Franchisereferalincome_RequestCompound::is_d_franchisereferalincome_franchisoramount_Valid() const{
    return m_d_franchisereferalincome_franchisoramount_isValid;
}

QString Franchisereferalincome_RequestCompound::getDFranchisereferalincomeAgentamount() const {
    return m_d_franchisereferalincome_agentamount;
}
void Franchisereferalincome_RequestCompound::setDFranchisereferalincomeAgentamount(const QString &d_franchisereferalincome_agentamount) {
    m_d_franchisereferalincome_agentamount = d_franchisereferalincome_agentamount;
    m_d_franchisereferalincome_agentamount_isSet = true;
}

bool Franchisereferalincome_RequestCompound::is_d_franchisereferalincome_agentamount_Set() const{
    return m_d_franchisereferalincome_agentamount_isSet;
}

bool Franchisereferalincome_RequestCompound::is_d_franchisereferalincome_agentamount_Valid() const{
    return m_d_franchisereferalincome_agentamount_isValid;
}

QString Franchisereferalincome_RequestCompound::getDtFranchisereferalincomeDisbursed() const {
    return m_dt_franchisereferalincome_disbursed;
}
void Franchisereferalincome_RequestCompound::setDtFranchisereferalincomeDisbursed(const QString &dt_franchisereferalincome_disbursed) {
    m_dt_franchisereferalincome_disbursed = dt_franchisereferalincome_disbursed;
    m_dt_franchisereferalincome_disbursed_isSet = true;
}

bool Franchisereferalincome_RequestCompound::is_dt_franchisereferalincome_disbursed_Set() const{
    return m_dt_franchisereferalincome_disbursed_isSet;
}

bool Franchisereferalincome_RequestCompound::is_dt_franchisereferalincome_disbursed_Valid() const{
    return m_dt_franchisereferalincome_disbursed_isValid;
}

QString Franchisereferalincome_RequestCompound::getTFranchisereferalincomeComment() const {
    return m_t_franchisereferalincome_comment;
}
void Franchisereferalincome_RequestCompound::setTFranchisereferalincomeComment(const QString &t_franchisereferalincome_comment) {
    m_t_franchisereferalincome_comment = t_franchisereferalincome_comment;
    m_t_franchisereferalincome_comment_isSet = true;
}

bool Franchisereferalincome_RequestCompound::is_t_franchisereferalincome_comment_Set() const{
    return m_t_franchisereferalincome_comment_isSet;
}

bool Franchisereferalincome_RequestCompound::is_t_franchisereferalincome_comment_Valid() const{
    return m_t_franchisereferalincome_comment_isValid;
}

qint32 Franchisereferalincome_RequestCompound::getFkiFranchiseofficeId() const {
    return m_fki_franchiseoffice_id;
}
void Franchisereferalincome_RequestCompound::setFkiFranchiseofficeId(const qint32 &fki_franchiseoffice_id) {
    m_fki_franchiseoffice_id = fki_franchiseoffice_id;
    m_fki_franchiseoffice_id_isSet = true;
}

bool Franchisereferalincome_RequestCompound::is_fki_franchiseoffice_id_Set() const{
    return m_fki_franchiseoffice_id_isSet;
}

bool Franchisereferalincome_RequestCompound::is_fki_franchiseoffice_id_Valid() const{
    return m_fki_franchiseoffice_id_isValid;
}

QString Franchisereferalincome_RequestCompound::getSFranchisereferalincomeRemoteid() const {
    return m_s_franchisereferalincome_remoteid;
}
void Franchisereferalincome_RequestCompound::setSFranchisereferalincomeRemoteid(const QString &s_franchisereferalincome_remoteid) {
    m_s_franchisereferalincome_remoteid = s_franchisereferalincome_remoteid;
    m_s_franchisereferalincome_remoteid_isSet = true;
}

bool Franchisereferalincome_RequestCompound::is_s_franchisereferalincome_remoteid_Set() const{
    return m_s_franchisereferalincome_remoteid_isSet;
}

bool Franchisereferalincome_RequestCompound::is_s_franchisereferalincome_remoteid_Valid() const{
    return m_s_franchisereferalincome_remoteid_isValid;
}

Address_Request Franchisereferalincome_RequestCompound::getObjAddress() const {
    return m_obj_address;
}
void Franchisereferalincome_RequestCompound::setObjAddress(const Address_Request &obj_address) {
    m_obj_address = obj_address;
    m_obj_address_isSet = true;
}

bool Franchisereferalincome_RequestCompound::is_obj_address_Set() const{
    return m_obj_address_isSet;
}

bool Franchisereferalincome_RequestCompound::is_obj_address_Valid() const{
    return m_obj_address_isValid;
}

QList<Contact_RequestCompound> Franchisereferalincome_RequestCompound::getAObjContact() const {
    return m_a_obj_contact;
}
void Franchisereferalincome_RequestCompound::setAObjContact(const QList<Contact_RequestCompound> &a_obj_contact) {
    m_a_obj_contact = a_obj_contact;
    m_a_obj_contact_isSet = true;
}

bool Franchisereferalincome_RequestCompound::is_a_obj_contact_Set() const{
    return m_a_obj_contact_isSet;
}

bool Franchisereferalincome_RequestCompound::is_a_obj_contact_Valid() const{
    return m_a_obj_contact_isValid;
}

bool Franchisereferalincome_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_franchisereferalincome_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_franchisebroker_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_franchisereferalincomeprogram_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_period_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_franchisereferalincome_loan_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_franchisereferalincome_franchiseamount_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_franchisereferalincome_franchisoramount_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_franchisereferalincome_agentamount_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_franchisereferalincome_disbursed_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_franchisereferalincome_comment_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_franchiseoffice_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_franchisereferalincome_remoteid_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_address.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_contact.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Franchisereferalincome_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_franchisebroker_id_isValid && m_fki_franchisereferalincomeprogram_id_isValid && m_fki_period_id_isValid && m_d_franchisereferalincome_loan_isValid && m_d_franchisereferalincome_franchiseamount_isValid && m_d_franchisereferalincome_franchisoramount_isValid && m_d_franchisereferalincome_agentamount_isValid && m_dt_franchisereferalincome_disbursed_isValid && m_t_franchisereferalincome_comment_isValid && m_fki_franchiseoffice_id_isValid && m_s_franchisereferalincome_remoteid_isValid && m_a_obj_contact_isValid && true;
}

} // namespace Ezmaxapi
