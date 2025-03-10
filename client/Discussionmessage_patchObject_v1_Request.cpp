/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Discussionmessage_patchObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Discussionmessage_patchObject_v1_Request::Discussionmessage_patchObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Discussionmessage_patchObject_v1_Request::Discussionmessage_patchObject_v1_Request() {
    this->initializeModel();
}

Discussionmessage_patchObject_v1_Request::~Discussionmessage_patchObject_v1_Request() {}

void Discussionmessage_patchObject_v1_Request::initializeModel() {

    m_obj_discussionmessage_isSet = false;
    m_obj_discussionmessage_isValid = false;
}

void Discussionmessage_patchObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Discussionmessage_patchObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_discussionmessage_isValid = ::Ezmaxapi::fromJsonValue(m_obj_discussionmessage, json[QString("objDiscussionmessage")]);
    m_obj_discussionmessage_isSet = !json[QString("objDiscussionmessage")].isNull() && m_obj_discussionmessage_isValid;
}

QString Discussionmessage_patchObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Discussionmessage_patchObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_discussionmessage.isSet()) {
        obj.insert(QString("objDiscussionmessage"), ::Ezmaxapi::toJsonValue(m_obj_discussionmessage));
    }
    return obj;
}

Discussionmessage_RequestPatch Discussionmessage_patchObject_v1_Request::getObjDiscussionmessage() const {
    return m_obj_discussionmessage;
}
void Discussionmessage_patchObject_v1_Request::setObjDiscussionmessage(const Discussionmessage_RequestPatch &obj_discussionmessage) {
    m_obj_discussionmessage = obj_discussionmessage;
    m_obj_discussionmessage_isSet = true;
}

bool Discussionmessage_patchObject_v1_Request::is_obj_discussionmessage_Set() const{
    return m_obj_discussionmessage_isSet;
}

bool Discussionmessage_patchObject_v1_Request::is_obj_discussionmessage_Valid() const{
    return m_obj_discussionmessage_isValid;
}

bool Discussionmessage_patchObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_discussionmessage.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Discussionmessage_patchObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_discussionmessage_isValid && true;
}

} // namespace Ezmaxapi
