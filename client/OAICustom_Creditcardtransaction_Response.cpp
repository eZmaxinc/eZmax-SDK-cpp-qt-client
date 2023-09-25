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

#include "OAICustom_Creditcardtransaction_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAICustom_Creditcardtransaction_Response::OAICustom_Creditcardtransaction_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_Creditcardtransaction_Response::OAICustom_Creditcardtransaction_Response() {
    this->initializeModel();
}

OAICustom_Creditcardtransaction_Response::~OAICustom_Creditcardtransaction_Response() {}

void OAICustom_Creditcardtransaction_Response::initializeModel() {

    m_e_creditcardtype_codename_isSet = false;
    m_e_creditcardtype_codename_isValid = false;

    m_d_creditcardtransaction_amount_isSet = false;
    m_d_creditcardtransaction_amount_isValid = false;

    m_s_creditcardtransaction_partiallydecryptednumber_isSet = false;
    m_s_creditcardtransaction_partiallydecryptednumber_isValid = false;

    m_s_creditcardtransaction_referencenumber_isSet = false;
    m_s_creditcardtransaction_referencenumber_isValid = false;
}

void OAICustom_Creditcardtransaction_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_Creditcardtransaction_Response::fromJsonObject(QJsonObject json) {

    m_e_creditcardtype_codename_isValid = ::Ezmaxapi::fromJsonValue(m_e_creditcardtype_codename, json[QString("eCreditcardtypeCodename")]);
    m_e_creditcardtype_codename_isSet = !json[QString("eCreditcardtypeCodename")].isNull() && m_e_creditcardtype_codename_isValid;

    m_d_creditcardtransaction_amount_isValid = ::Ezmaxapi::fromJsonValue(m_d_creditcardtransaction_amount, json[QString("dCreditcardtransactionAmount")]);
    m_d_creditcardtransaction_amount_isSet = !json[QString("dCreditcardtransactionAmount")].isNull() && m_d_creditcardtransaction_amount_isValid;

    m_s_creditcardtransaction_partiallydecryptednumber_isValid = ::Ezmaxapi::fromJsonValue(m_s_creditcardtransaction_partiallydecryptednumber, json[QString("sCreditcardtransactionPartiallydecryptednumber")]);
    m_s_creditcardtransaction_partiallydecryptednumber_isSet = !json[QString("sCreditcardtransactionPartiallydecryptednumber")].isNull() && m_s_creditcardtransaction_partiallydecryptednumber_isValid;

    m_s_creditcardtransaction_referencenumber_isValid = ::Ezmaxapi::fromJsonValue(m_s_creditcardtransaction_referencenumber, json[QString("sCreditcardtransactionReferencenumber")]);
    m_s_creditcardtransaction_referencenumber_isSet = !json[QString("sCreditcardtransactionReferencenumber")].isNull() && m_s_creditcardtransaction_referencenumber_isValid;
}

QString OAICustom_Creditcardtransaction_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_Creditcardtransaction_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_e_creditcardtype_codename.isSet()) {
        obj.insert(QString("eCreditcardtypeCodename"), ::Ezmaxapi::toJsonValue(m_e_creditcardtype_codename));
    }
    if (m_d_creditcardtransaction_amount_isSet) {
        obj.insert(QString("dCreditcardtransactionAmount"), ::Ezmaxapi::toJsonValue(m_d_creditcardtransaction_amount));
    }
    if (m_s_creditcardtransaction_partiallydecryptednumber_isSet) {
        obj.insert(QString("sCreditcardtransactionPartiallydecryptednumber"), ::Ezmaxapi::toJsonValue(m_s_creditcardtransaction_partiallydecryptednumber));
    }
    if (m_s_creditcardtransaction_referencenumber_isSet) {
        obj.insert(QString("sCreditcardtransactionReferencenumber"), ::Ezmaxapi::toJsonValue(m_s_creditcardtransaction_referencenumber));
    }
    return obj;
}

OAIField_eCreditcardtypeCodename OAICustom_Creditcardtransaction_Response::getECreditcardtypeCodename() const {
    return m_e_creditcardtype_codename;
}
void OAICustom_Creditcardtransaction_Response::setECreditcardtypeCodename(const OAIField_eCreditcardtypeCodename &e_creditcardtype_codename) {
    m_e_creditcardtype_codename = e_creditcardtype_codename;
    m_e_creditcardtype_codename_isSet = true;
}

bool OAICustom_Creditcardtransaction_Response::is_e_creditcardtype_codename_Set() const{
    return m_e_creditcardtype_codename_isSet;
}

bool OAICustom_Creditcardtransaction_Response::is_e_creditcardtype_codename_Valid() const{
    return m_e_creditcardtype_codename_isValid;
}

QString OAICustom_Creditcardtransaction_Response::getDCreditcardtransactionAmount() const {
    return m_d_creditcardtransaction_amount;
}
void OAICustom_Creditcardtransaction_Response::setDCreditcardtransactionAmount(const QString &d_creditcardtransaction_amount) {
    m_d_creditcardtransaction_amount = d_creditcardtransaction_amount;
    m_d_creditcardtransaction_amount_isSet = true;
}

bool OAICustom_Creditcardtransaction_Response::is_d_creditcardtransaction_amount_Set() const{
    return m_d_creditcardtransaction_amount_isSet;
}

bool OAICustom_Creditcardtransaction_Response::is_d_creditcardtransaction_amount_Valid() const{
    return m_d_creditcardtransaction_amount_isValid;
}

QString OAICustom_Creditcardtransaction_Response::getSCreditcardtransactionPartiallydecryptednumber() const {
    return m_s_creditcardtransaction_partiallydecryptednumber;
}
void OAICustom_Creditcardtransaction_Response::setSCreditcardtransactionPartiallydecryptednumber(const QString &s_creditcardtransaction_partiallydecryptednumber) {
    m_s_creditcardtransaction_partiallydecryptednumber = s_creditcardtransaction_partiallydecryptednumber;
    m_s_creditcardtransaction_partiallydecryptednumber_isSet = true;
}

bool OAICustom_Creditcardtransaction_Response::is_s_creditcardtransaction_partiallydecryptednumber_Set() const{
    return m_s_creditcardtransaction_partiallydecryptednumber_isSet;
}

bool OAICustom_Creditcardtransaction_Response::is_s_creditcardtransaction_partiallydecryptednumber_Valid() const{
    return m_s_creditcardtransaction_partiallydecryptednumber_isValid;
}

QString OAICustom_Creditcardtransaction_Response::getSCreditcardtransactionReferencenumber() const {
    return m_s_creditcardtransaction_referencenumber;
}
void OAICustom_Creditcardtransaction_Response::setSCreditcardtransactionReferencenumber(const QString &s_creditcardtransaction_referencenumber) {
    m_s_creditcardtransaction_referencenumber = s_creditcardtransaction_referencenumber;
    m_s_creditcardtransaction_referencenumber_isSet = true;
}

bool OAICustom_Creditcardtransaction_Response::is_s_creditcardtransaction_referencenumber_Set() const{
    return m_s_creditcardtransaction_referencenumber_isSet;
}

bool OAICustom_Creditcardtransaction_Response::is_s_creditcardtransaction_referencenumber_Valid() const{
    return m_s_creditcardtransaction_referencenumber_isValid;
}

bool OAICustom_Creditcardtransaction_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_e_creditcardtype_codename.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_creditcardtransaction_amount_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_creditcardtransaction_partiallydecryptednumber_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_creditcardtransaction_referencenumber_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_Creditcardtransaction_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_d_creditcardtransaction_amount_isValid && m_s_creditcardtransaction_partiallydecryptednumber_isValid && m_s_creditcardtransaction_referencenumber_isValid && true;
}

} // namespace Ezmaxapi
