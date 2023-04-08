/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIPaymentterm_ListElement.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPaymentterm_ListElement::OAIPaymentterm_ListElement(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPaymentterm_ListElement::OAIPaymentterm_ListElement() {
    this->initializeModel();
}

OAIPaymentterm_ListElement::~OAIPaymentterm_ListElement() {}

void OAIPaymentterm_ListElement::initializeModel() {

    m_pki_paymentterm_id_isSet = false;
    m_pki_paymentterm_id_isValid = false;

    m_s_paymentterm_code_isSet = false;
    m_s_paymentterm_code_isValid = false;

    m_e_paymentterm_type_isSet = false;
    m_e_paymentterm_type_isValid = false;

    m_i_paymentterm_day_isSet = false;
    m_i_paymentterm_day_isValid = false;

    m_s_paymentterm_description_x_isSet = false;
    m_s_paymentterm_description_x_isValid = false;

    m_b_paymentterm_isactive_isSet = false;
    m_b_paymentterm_isactive_isValid = false;
}

void OAIPaymentterm_ListElement::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPaymentterm_ListElement::fromJsonObject(QJsonObject json) {

    m_pki_paymentterm_id_isValid = ::OpenAPI::fromJsonValue(pki_paymentterm_id, json[QString("pkiPaymenttermID")]);
    m_pki_paymentterm_id_isSet = !json[QString("pkiPaymenttermID")].isNull() && m_pki_paymentterm_id_isValid;

    m_s_paymentterm_code_isValid = ::OpenAPI::fromJsonValue(s_paymentterm_code, json[QString("sPaymenttermCode")]);
    m_s_paymentterm_code_isSet = !json[QString("sPaymenttermCode")].isNull() && m_s_paymentterm_code_isValid;

    m_e_paymentterm_type_isValid = ::OpenAPI::fromJsonValue(e_paymentterm_type, json[QString("ePaymenttermType")]);
    m_e_paymentterm_type_isSet = !json[QString("ePaymenttermType")].isNull() && m_e_paymentterm_type_isValid;

    m_i_paymentterm_day_isValid = ::OpenAPI::fromJsonValue(i_paymentterm_day, json[QString("iPaymenttermDay")]);
    m_i_paymentterm_day_isSet = !json[QString("iPaymenttermDay")].isNull() && m_i_paymentterm_day_isValid;

    m_s_paymentterm_description_x_isValid = ::OpenAPI::fromJsonValue(s_paymentterm_description_x, json[QString("sPaymenttermDescriptionX")]);
    m_s_paymentterm_description_x_isSet = !json[QString("sPaymenttermDescriptionX")].isNull() && m_s_paymentterm_description_x_isValid;

    m_b_paymentterm_isactive_isValid = ::OpenAPI::fromJsonValue(b_paymentterm_isactive, json[QString("bPaymenttermIsactive")]);
    m_b_paymentterm_isactive_isSet = !json[QString("bPaymenttermIsactive")].isNull() && m_b_paymentterm_isactive_isValid;
}

QString OAIPaymentterm_ListElement::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPaymentterm_ListElement::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_paymentterm_id_isSet) {
        obj.insert(QString("pkiPaymenttermID"), ::OpenAPI::toJsonValue(pki_paymentterm_id));
    }
    if (m_s_paymentterm_code_isSet) {
        obj.insert(QString("sPaymenttermCode"), ::OpenAPI::toJsonValue(s_paymentterm_code));
    }
    if (e_paymentterm_type.isSet()) {
        obj.insert(QString("ePaymenttermType"), ::OpenAPI::toJsonValue(e_paymentterm_type));
    }
    if (m_i_paymentterm_day_isSet) {
        obj.insert(QString("iPaymenttermDay"), ::OpenAPI::toJsonValue(i_paymentterm_day));
    }
    if (m_s_paymentterm_description_x_isSet) {
        obj.insert(QString("sPaymenttermDescriptionX"), ::OpenAPI::toJsonValue(s_paymentterm_description_x));
    }
    if (m_b_paymentterm_isactive_isSet) {
        obj.insert(QString("bPaymenttermIsactive"), ::OpenAPI::toJsonValue(b_paymentterm_isactive));
    }
    return obj;
}

qint32 OAIPaymentterm_ListElement::getPkiPaymenttermId() const {
    return pki_paymentterm_id;
}
void OAIPaymentterm_ListElement::setPkiPaymenttermId(const qint32 &pki_paymentterm_id) {
    this->pki_paymentterm_id = pki_paymentterm_id;
    this->m_pki_paymentterm_id_isSet = true;
}

bool OAIPaymentterm_ListElement::is_pki_paymentterm_id_Set() const{
    return m_pki_paymentterm_id_isSet;
}

bool OAIPaymentterm_ListElement::is_pki_paymentterm_id_Valid() const{
    return m_pki_paymentterm_id_isValid;
}

QString OAIPaymentterm_ListElement::getSPaymenttermCode() const {
    return s_paymentterm_code;
}
void OAIPaymentterm_ListElement::setSPaymenttermCode(const QString &s_paymentterm_code) {
    this->s_paymentterm_code = s_paymentterm_code;
    this->m_s_paymentterm_code_isSet = true;
}

bool OAIPaymentterm_ListElement::is_s_paymentterm_code_Set() const{
    return m_s_paymentterm_code_isSet;
}

bool OAIPaymentterm_ListElement::is_s_paymentterm_code_Valid() const{
    return m_s_paymentterm_code_isValid;
}

OAIField_ePaymenttermType OAIPaymentterm_ListElement::getEPaymenttermType() const {
    return e_paymentterm_type;
}
void OAIPaymentterm_ListElement::setEPaymenttermType(const OAIField_ePaymenttermType &e_paymentterm_type) {
    this->e_paymentterm_type = e_paymentterm_type;
    this->m_e_paymentterm_type_isSet = true;
}

bool OAIPaymentterm_ListElement::is_e_paymentterm_type_Set() const{
    return m_e_paymentterm_type_isSet;
}

bool OAIPaymentterm_ListElement::is_e_paymentterm_type_Valid() const{
    return m_e_paymentterm_type_isValid;
}

qint32 OAIPaymentterm_ListElement::getIPaymenttermDay() const {
    return i_paymentterm_day;
}
void OAIPaymentterm_ListElement::setIPaymenttermDay(const qint32 &i_paymentterm_day) {
    this->i_paymentterm_day = i_paymentterm_day;
    this->m_i_paymentterm_day_isSet = true;
}

bool OAIPaymentterm_ListElement::is_i_paymentterm_day_Set() const{
    return m_i_paymentterm_day_isSet;
}

bool OAIPaymentterm_ListElement::is_i_paymentterm_day_Valid() const{
    return m_i_paymentterm_day_isValid;
}

QString OAIPaymentterm_ListElement::getSPaymenttermDescriptionX() const {
    return s_paymentterm_description_x;
}
void OAIPaymentterm_ListElement::setSPaymenttermDescriptionX(const QString &s_paymentterm_description_x) {
    this->s_paymentterm_description_x = s_paymentterm_description_x;
    this->m_s_paymentterm_description_x_isSet = true;
}

bool OAIPaymentterm_ListElement::is_s_paymentterm_description_x_Set() const{
    return m_s_paymentterm_description_x_isSet;
}

bool OAIPaymentterm_ListElement::is_s_paymentterm_description_x_Valid() const{
    return m_s_paymentterm_description_x_isValid;
}

bool OAIPaymentterm_ListElement::isBPaymenttermIsactive() const {
    return b_paymentterm_isactive;
}
void OAIPaymentterm_ListElement::setBPaymenttermIsactive(const bool &b_paymentterm_isactive) {
    this->b_paymentterm_isactive = b_paymentterm_isactive;
    this->m_b_paymentterm_isactive_isSet = true;
}

bool OAIPaymentterm_ListElement::is_b_paymentterm_isactive_Set() const{
    return m_b_paymentterm_isactive_isSet;
}

bool OAIPaymentterm_ListElement::is_b_paymentterm_isactive_Valid() const{
    return m_b_paymentterm_isactive_isValid;
}

bool OAIPaymentterm_ListElement::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_paymentterm_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_paymentterm_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_paymentterm_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_paymentterm_day_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_paymentterm_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_paymentterm_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPaymentterm_ListElement::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_paymentterm_id_isValid && m_s_paymentterm_code_isValid && m_e_paymentterm_type_isValid && m_i_paymentterm_day_isValid && m_s_paymentterm_description_x_isValid && m_b_paymentterm_isactive_isValid && true;
}

} // namespace OpenAPI
