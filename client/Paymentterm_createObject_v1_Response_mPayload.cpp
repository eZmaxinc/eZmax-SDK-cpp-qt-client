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

#include "Paymentterm_createObject_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Paymentterm_createObject_v1_Response_mPayload::Paymentterm_createObject_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Paymentterm_createObject_v1_Response_mPayload::Paymentterm_createObject_v1_Response_mPayload() {
    this->initializeModel();
}

Paymentterm_createObject_v1_Response_mPayload::~Paymentterm_createObject_v1_Response_mPayload() {}

void Paymentterm_createObject_v1_Response_mPayload::initializeModel() {

    m_a_pki_paymentterm_id_isSet = false;
    m_a_pki_paymentterm_id_isValid = false;
}

void Paymentterm_createObject_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Paymentterm_createObject_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_pki_paymentterm_id_isValid = ::Ezmaxapi::fromJsonValue(m_a_pki_paymentterm_id, json[QString("a_pkiPaymenttermID")]);
    m_a_pki_paymentterm_id_isSet = !json[QString("a_pkiPaymenttermID")].isNull() && m_a_pki_paymentterm_id_isValid;
}

QString Paymentterm_createObject_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Paymentterm_createObject_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_pki_paymentterm_id.size() > 0) {
        obj.insert(QString("a_pkiPaymenttermID"), ::Ezmaxapi::toJsonValue(m_a_pki_paymentterm_id));
    }
    return obj;
}

QList<qint32> Paymentterm_createObject_v1_Response_mPayload::getAPkiPaymenttermId() const {
    return m_a_pki_paymentterm_id;
}
void Paymentterm_createObject_v1_Response_mPayload::setAPkiPaymenttermId(const QList<qint32> &a_pki_paymentterm_id) {
    m_a_pki_paymentterm_id = a_pki_paymentterm_id;
    m_a_pki_paymentterm_id_isSet = true;
}

bool Paymentterm_createObject_v1_Response_mPayload::is_a_pki_paymentterm_id_Set() const{
    return m_a_pki_paymentterm_id_isSet;
}

bool Paymentterm_createObject_v1_Response_mPayload::is_a_pki_paymentterm_id_Valid() const{
    return m_a_pki_paymentterm_id_isValid;
}

bool Paymentterm_createObject_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_pki_paymentterm_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Paymentterm_createObject_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_pki_paymentterm_id_isValid && true;
}

} // namespace Ezmaxapi