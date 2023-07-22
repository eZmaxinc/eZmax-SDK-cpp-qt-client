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

#include "OAIEzsignsignergroup_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignsignergroup_ResponseCompound::OAIEzsignsignergroup_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignsignergroup_ResponseCompound::OAIEzsignsignergroup_ResponseCompound() {
    this->initializeModel();
}

OAIEzsignsignergroup_ResponseCompound::~OAIEzsignsignergroup_ResponseCompound() {}

void OAIEzsignsignergroup_ResponseCompound::initializeModel() {

    m_pki_ezsignsignergroup_id_isSet = false;
    m_pki_ezsignsignergroup_id_isValid = false;
}

void OAIEzsignsignergroup_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignsignergroup_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsignsignergroup_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignsignergroup_id, json[QString("pkiEzsignsignergroupID")]);
    m_pki_ezsignsignergroup_id_isSet = !json[QString("pkiEzsignsignergroupID")].isNull() && m_pki_ezsignsignergroup_id_isValid;
}

QString OAIEzsignsignergroup_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignsignergroup_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignsignergroup_id_isSet) {
        obj.insert(QString("pkiEzsignsignergroupID"), ::OpenAPI::toJsonValue(pki_ezsignsignergroup_id));
    }
    return obj;
}

qint32 OAIEzsignsignergroup_ResponseCompound::getPkiEzsignsignergroupId() const {
    return pki_ezsignsignergroup_id;
}
void OAIEzsignsignergroup_ResponseCompound::setPkiEzsignsignergroupId(const qint32 &pki_ezsignsignergroup_id) {
    this->pki_ezsignsignergroup_id = pki_ezsignsignergroup_id;
    this->m_pki_ezsignsignergroup_id_isSet = true;
}

bool OAIEzsignsignergroup_ResponseCompound::is_pki_ezsignsignergroup_id_Set() const{
    return m_pki_ezsignsignergroup_id_isSet;
}

bool OAIEzsignsignergroup_ResponseCompound::is_pki_ezsignsignergroup_id_Valid() const{
    return m_pki_ezsignsignergroup_id_isValid;
}

bool OAIEzsignsignergroup_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignsignergroup_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignsignergroup_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignsignergroup_id_isValid && true;
}

} // namespace OpenAPI