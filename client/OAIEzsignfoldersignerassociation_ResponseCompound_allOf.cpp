/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.4
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignfoldersignerassociation_ResponseCompound_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfoldersignerassociation_ResponseCompound_allOf::OAIEzsignfoldersignerassociation_ResponseCompound_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfoldersignerassociation_ResponseCompound_allOf::OAIEzsignfoldersignerassociation_ResponseCompound_allOf() {
    this->initializeModel();
}

OAIEzsignfoldersignerassociation_ResponseCompound_allOf::~OAIEzsignfoldersignerassociation_ResponseCompound_allOf() {}

void OAIEzsignfoldersignerassociation_ResponseCompound_allOf::initializeModel() {

    m_obj_user_isSet = false;
    m_obj_user_isValid = false;

    m_obj_ezsignsigner_isSet = false;
    m_obj_ezsignsigner_isValid = false;
}

void OAIEzsignfoldersignerassociation_ResponseCompound_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfoldersignerassociation_ResponseCompound_allOf::fromJsonObject(QJsonObject json) {

    m_obj_user_isValid = ::OpenAPI::fromJsonValue(obj_user, json[QString("objUser")]);
    m_obj_user_isSet = !json[QString("objUser")].isNull() && m_obj_user_isValid;

    m_obj_ezsignsigner_isValid = ::OpenAPI::fromJsonValue(obj_ezsignsigner, json[QString("objEzsignsigner")]);
    m_obj_ezsignsigner_isSet = !json[QString("objEzsignsigner")].isNull() && m_obj_ezsignsigner_isValid;
}

QString OAIEzsignfoldersignerassociation_ResponseCompound_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfoldersignerassociation_ResponseCompound_allOf::asJsonObject() const {
    QJsonObject obj;
    if (obj_user.isSet()) {
        obj.insert(QString("objUser"), ::OpenAPI::toJsonValue(obj_user));
    }
    if (obj_ezsignsigner.isSet()) {
        obj.insert(QString("objEzsignsigner"), ::OpenAPI::toJsonValue(obj_ezsignsigner));
    }
    return obj;
}

OAIEzsignfoldersignerassociation_ResponseCompound_User OAIEzsignfoldersignerassociation_ResponseCompound_allOf::getObjUser() const {
    return obj_user;
}
void OAIEzsignfoldersignerassociation_ResponseCompound_allOf::setObjUser(const OAIEzsignfoldersignerassociation_ResponseCompound_User &obj_user) {
    this->obj_user = obj_user;
    this->m_obj_user_isSet = true;
}

bool OAIEzsignfoldersignerassociation_ResponseCompound_allOf::is_obj_user_Set() const{
    return m_obj_user_isSet;
}

bool OAIEzsignfoldersignerassociation_ResponseCompound_allOf::is_obj_user_Valid() const{
    return m_obj_user_isValid;
}

OAIEzsignsigner_ResponseCompound OAIEzsignfoldersignerassociation_ResponseCompound_allOf::getObjEzsignsigner() const {
    return obj_ezsignsigner;
}
void OAIEzsignfoldersignerassociation_ResponseCompound_allOf::setObjEzsignsigner(const OAIEzsignsigner_ResponseCompound &obj_ezsignsigner) {
    this->obj_ezsignsigner = obj_ezsignsigner;
    this->m_obj_ezsignsigner_isSet = true;
}

bool OAIEzsignfoldersignerassociation_ResponseCompound_allOf::is_obj_ezsignsigner_Set() const{
    return m_obj_ezsignsigner_isSet;
}

bool OAIEzsignfoldersignerassociation_ResponseCompound_allOf::is_obj_ezsignsigner_Valid() const{
    return m_obj_ezsignsigner_isValid;
}

bool OAIEzsignfoldersignerassociation_ResponseCompound_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_ezsignsigner.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfoldersignerassociation_ResponseCompound_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI