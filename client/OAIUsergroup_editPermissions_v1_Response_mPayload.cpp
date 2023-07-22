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

#include "OAIUsergroup_editPermissions_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUsergroup_editPermissions_v1_Response_mPayload::OAIUsergroup_editPermissions_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUsergroup_editPermissions_v1_Response_mPayload::OAIUsergroup_editPermissions_v1_Response_mPayload() {
    this->initializeModel();
}

OAIUsergroup_editPermissions_v1_Response_mPayload::~OAIUsergroup_editPermissions_v1_Response_mPayload() {}

void OAIUsergroup_editPermissions_v1_Response_mPayload::initializeModel() {

    m_a_pki_permission_id_isSet = false;
    m_a_pki_permission_id_isValid = false;
}

void OAIUsergroup_editPermissions_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUsergroup_editPermissions_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_pki_permission_id_isValid = ::OpenAPI::fromJsonValue(a_pki_permission_id, json[QString("a_pkiPermissionID")]);
    m_a_pki_permission_id_isSet = !json[QString("a_pkiPermissionID")].isNull() && m_a_pki_permission_id_isValid;
}

QString OAIUsergroup_editPermissions_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUsergroup_editPermissions_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_pki_permission_id.size() > 0) {
        obj.insert(QString("a_pkiPermissionID"), ::OpenAPI::toJsonValue(a_pki_permission_id));
    }
    return obj;
}

QList<qint32> OAIUsergroup_editPermissions_v1_Response_mPayload::getAPkiPermissionId() const {
    return a_pki_permission_id;
}
void OAIUsergroup_editPermissions_v1_Response_mPayload::setAPkiPermissionId(const QList<qint32> &a_pki_permission_id) {
    this->a_pki_permission_id = a_pki_permission_id;
    this->m_a_pki_permission_id_isSet = true;
}

bool OAIUsergroup_editPermissions_v1_Response_mPayload::is_a_pki_permission_id_Set() const{
    return m_a_pki_permission_id_isSet;
}

bool OAIUsergroup_editPermissions_v1_Response_mPayload::is_a_pki_permission_id_Valid() const{
    return m_a_pki_permission_id_isValid;
}

bool OAIUsergroup_editPermissions_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_pki_permission_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUsergroup_editPermissions_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_pki_permission_id_isValid && true;
}

} // namespace OpenAPI
