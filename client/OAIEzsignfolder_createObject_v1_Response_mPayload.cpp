/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.  We provide SDKs for customers. They are generated using OpenAPI codegen, we encourage customers to use them as we also provide samples for them.  You can choose to build your own implementation manually or can use any compatible OpenAPI 3.0 generator like Swagger Codegen, OpenAPI codegen or any commercial generators.  If you need helping understanding how to use this API, don't waste too much time looking for it. Contact support-api@ezmax.ca, we're here to help. We are developpers so we know programmers don't like bad documentation. If you don't find what you need in the documentation, let us know, we'll improve it and put you rapidly up on track.
 *
 * The version of the OpenAPI document: 1.0.29
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignfolder_createObject_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfolder_createObject_v1_Response_mPayload::OAIEzsignfolder_createObject_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfolder_createObject_v1_Response_mPayload::OAIEzsignfolder_createObject_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsignfolder_createObject_v1_Response_mPayload::~OAIEzsignfolder_createObject_v1_Response_mPayload() {}

void OAIEzsignfolder_createObject_v1_Response_mPayload::initializeModel() {

    m_a_pki_ezsignfolder_id_isSet = false;
    m_a_pki_ezsignfolder_id_isValid = false;
}

void OAIEzsignfolder_createObject_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfolder_createObject_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_pki_ezsignfolder_id_isValid = ::OpenAPI::fromJsonValue(a_pki_ezsignfolder_id, json[QString("a_pkiEzsignfolderID")]);
    m_a_pki_ezsignfolder_id_isSet = !json[QString("a_pkiEzsignfolderID")].isNull() && m_a_pki_ezsignfolder_id_isValid;
}

QString OAIEzsignfolder_createObject_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfolder_createObject_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_pki_ezsignfolder_id.size() > 0) {
        obj.insert(QString("a_pkiEzsignfolderID"), ::OpenAPI::toJsonValue(a_pki_ezsignfolder_id));
    }
    return obj;
}

QList<qint32> OAIEzsignfolder_createObject_v1_Response_mPayload::getAPkiEzsignfolderId() const {
    return a_pki_ezsignfolder_id;
}
void OAIEzsignfolder_createObject_v1_Response_mPayload::setAPkiEzsignfolderId(const QList<qint32> &a_pki_ezsignfolder_id) {
    this->a_pki_ezsignfolder_id = a_pki_ezsignfolder_id;
    this->m_a_pki_ezsignfolder_id_isSet = true;
}

bool OAIEzsignfolder_createObject_v1_Response_mPayload::is_a_pki_ezsignfolder_id_Set() const{
    return m_a_pki_ezsignfolder_id_isSet;
}

bool OAIEzsignfolder_createObject_v1_Response_mPayload::is_a_pki_ezsignfolder_id_Valid() const{
    return m_a_pki_ezsignfolder_id_isValid;
}

bool OAIEzsignfolder_createObject_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_pki_ezsignfolder_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfolder_createObject_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_pki_ezsignfolder_id_isValid && true;
}

} // namespace OpenAPI
