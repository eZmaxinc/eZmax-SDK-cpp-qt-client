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

#include "OAISubnet_createObject_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISubnet_createObject_v1_Response_mPayload::OAISubnet_createObject_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISubnet_createObject_v1_Response_mPayload::OAISubnet_createObject_v1_Response_mPayload() {
    this->initializeModel();
}

OAISubnet_createObject_v1_Response_mPayload::~OAISubnet_createObject_v1_Response_mPayload() {}

void OAISubnet_createObject_v1_Response_mPayload::initializeModel() {

    m_a_pki_subnet_id_isSet = false;
    m_a_pki_subnet_id_isValid = false;
}

void OAISubnet_createObject_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISubnet_createObject_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_pki_subnet_id_isValid = ::OpenAPI::fromJsonValue(a_pki_subnet_id, json[QString("a_pkiSubnetID")]);
    m_a_pki_subnet_id_isSet = !json[QString("a_pkiSubnetID")].isNull() && m_a_pki_subnet_id_isValid;
}

QString OAISubnet_createObject_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISubnet_createObject_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_pki_subnet_id.size() > 0) {
        obj.insert(QString("a_pkiSubnetID"), ::OpenAPI::toJsonValue(a_pki_subnet_id));
    }
    return obj;
}

QList<qint32> OAISubnet_createObject_v1_Response_mPayload::getAPkiSubnetId() const {
    return a_pki_subnet_id;
}
void OAISubnet_createObject_v1_Response_mPayload::setAPkiSubnetId(const QList<qint32> &a_pki_subnet_id) {
    this->a_pki_subnet_id = a_pki_subnet_id;
    this->m_a_pki_subnet_id_isSet = true;
}

bool OAISubnet_createObject_v1_Response_mPayload::is_a_pki_subnet_id_Set() const{
    return m_a_pki_subnet_id_isSet;
}

bool OAISubnet_createObject_v1_Response_mPayload::is_a_pki_subnet_id_Valid() const{
    return m_a_pki_subnet_id_isValid;
}

bool OAISubnet_createObject_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_pki_subnet_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISubnet_createObject_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_pki_subnet_id_isValid && true;
}

} // namespace OpenAPI
