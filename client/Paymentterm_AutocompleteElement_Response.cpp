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

#include "Paymentterm_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Paymentterm_AutocompleteElement_Response::Paymentterm_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Paymentterm_AutocompleteElement_Response::Paymentterm_AutocompleteElement_Response() {
    this->initializeModel();
}

Paymentterm_AutocompleteElement_Response::~Paymentterm_AutocompleteElement_Response() {}

void Paymentterm_AutocompleteElement_Response::initializeModel() {

    m_pki_paymentterm_id_isSet = false;
    m_pki_paymentterm_id_isValid = false;

    m_s_paymentterm_description_x_isSet = false;
    m_s_paymentterm_description_x_isValid = false;

    m_b_paymentterm_isactive_isSet = false;
    m_b_paymentterm_isactive_isValid = false;
}

void Paymentterm_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Paymentterm_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_pki_paymentterm_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_paymentterm_id, json[QString("pkiPaymenttermID")]);
    m_pki_paymentterm_id_isSet = !json[QString("pkiPaymenttermID")].isNull() && m_pki_paymentterm_id_isValid;

    m_s_paymentterm_description_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_paymentterm_description_x, json[QString("sPaymenttermDescriptionX")]);
    m_s_paymentterm_description_x_isSet = !json[QString("sPaymenttermDescriptionX")].isNull() && m_s_paymentterm_description_x_isValid;

    m_b_paymentterm_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_paymentterm_isactive, json[QString("bPaymenttermIsactive")]);
    m_b_paymentterm_isactive_isSet = !json[QString("bPaymenttermIsactive")].isNull() && m_b_paymentterm_isactive_isValid;
}

QString Paymentterm_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Paymentterm_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_paymentterm_id_isSet) {
        obj.insert(QString("pkiPaymenttermID"), ::Ezmaxapi::toJsonValue(m_pki_paymentterm_id));
    }
    if (m_s_paymentterm_description_x_isSet) {
        obj.insert(QString("sPaymenttermDescriptionX"), ::Ezmaxapi::toJsonValue(m_s_paymentterm_description_x));
    }
    if (m_b_paymentterm_isactive_isSet) {
        obj.insert(QString("bPaymenttermIsactive"), ::Ezmaxapi::toJsonValue(m_b_paymentterm_isactive));
    }
    return obj;
}

qint32 Paymentterm_AutocompleteElement_Response::getPkiPaymenttermId() const {
    return m_pki_paymentterm_id;
}
void Paymentterm_AutocompleteElement_Response::setPkiPaymenttermId(const qint32 &pki_paymentterm_id) {
    m_pki_paymentterm_id = pki_paymentterm_id;
    m_pki_paymentterm_id_isSet = true;
}

bool Paymentterm_AutocompleteElement_Response::is_pki_paymentterm_id_Set() const{
    return m_pki_paymentterm_id_isSet;
}

bool Paymentterm_AutocompleteElement_Response::is_pki_paymentterm_id_Valid() const{
    return m_pki_paymentterm_id_isValid;
}

QString Paymentterm_AutocompleteElement_Response::getSPaymenttermDescriptionX() const {
    return m_s_paymentterm_description_x;
}
void Paymentterm_AutocompleteElement_Response::setSPaymenttermDescriptionX(const QString &s_paymentterm_description_x) {
    m_s_paymentterm_description_x = s_paymentterm_description_x;
    m_s_paymentterm_description_x_isSet = true;
}

bool Paymentterm_AutocompleteElement_Response::is_s_paymentterm_description_x_Set() const{
    return m_s_paymentterm_description_x_isSet;
}

bool Paymentterm_AutocompleteElement_Response::is_s_paymentterm_description_x_Valid() const{
    return m_s_paymentterm_description_x_isValid;
}

bool Paymentterm_AutocompleteElement_Response::isBPaymenttermIsactive() const {
    return m_b_paymentterm_isactive;
}
void Paymentterm_AutocompleteElement_Response::setBPaymenttermIsactive(const bool &b_paymentterm_isactive) {
    m_b_paymentterm_isactive = b_paymentterm_isactive;
    m_b_paymentterm_isactive_isSet = true;
}

bool Paymentterm_AutocompleteElement_Response::is_b_paymentterm_isactive_Set() const{
    return m_b_paymentterm_isactive_isSet;
}

bool Paymentterm_AutocompleteElement_Response::is_b_paymentterm_isactive_Valid() const{
    return m_b_paymentterm_isactive_isValid;
}

bool Paymentterm_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_paymentterm_id_isSet) {
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

bool Paymentterm_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_paymentterm_id_isValid && m_s_paymentterm_description_x_isValid && m_b_paymentterm_isactive_isValid && true;
}

} // namespace Ezmaxapi
