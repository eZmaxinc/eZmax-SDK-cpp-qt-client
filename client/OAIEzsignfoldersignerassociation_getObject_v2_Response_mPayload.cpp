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

#include "OAIEzsignfoldersignerassociation_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfoldersignerassociation_getObject_v2_Response_mPayload::OAIEzsignfoldersignerassociation_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfoldersignerassociation_getObject_v2_Response_mPayload::OAIEzsignfoldersignerassociation_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

OAIEzsignfoldersignerassociation_getObject_v2_Response_mPayload::~OAIEzsignfoldersignerassociation_getObject_v2_Response_mPayload() {}

void OAIEzsignfoldersignerassociation_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_ezsignfoldersignerassociation_isSet = false;
    m_obj_ezsignfoldersignerassociation_isValid = false;
}

void OAIEzsignfoldersignerassociation_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfoldersignerassociation_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_ezsignfoldersignerassociation_isValid = ::OpenAPI::fromJsonValue(obj_ezsignfoldersignerassociation, json[QString("objEzsignfoldersignerassociation")]);
    m_obj_ezsignfoldersignerassociation_isSet = !json[QString("objEzsignfoldersignerassociation")].isNull() && m_obj_ezsignfoldersignerassociation_isValid;
}

QString OAIEzsignfoldersignerassociation_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfoldersignerassociation_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsignfoldersignerassociation.isSet()) {
        obj.insert(QString("objEzsignfoldersignerassociation"), ::OpenAPI::toJsonValue(obj_ezsignfoldersignerassociation));
    }
    return obj;
}

OAIEzsignfoldersignerassociation_ResponseCompound OAIEzsignfoldersignerassociation_getObject_v2_Response_mPayload::getObjEzsignfoldersignerassociation() const {
    return obj_ezsignfoldersignerassociation;
}
void OAIEzsignfoldersignerassociation_getObject_v2_Response_mPayload::setObjEzsignfoldersignerassociation(const OAIEzsignfoldersignerassociation_ResponseCompound &obj_ezsignfoldersignerassociation) {
    this->obj_ezsignfoldersignerassociation = obj_ezsignfoldersignerassociation;
    this->m_obj_ezsignfoldersignerassociation_isSet = true;
}

bool OAIEzsignfoldersignerassociation_getObject_v2_Response_mPayload::is_obj_ezsignfoldersignerassociation_Set() const{
    return m_obj_ezsignfoldersignerassociation_isSet;
}

bool OAIEzsignfoldersignerassociation_getObject_v2_Response_mPayload::is_obj_ezsignfoldersignerassociation_Valid() const{
    return m_obj_ezsignfoldersignerassociation_isValid;
}

bool OAIEzsignfoldersignerassociation_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsignfoldersignerassociation.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfoldersignerassociation_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsignfoldersignerassociation_isValid && true;
}

} // namespace OpenAPI
