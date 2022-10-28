/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignfoldertype_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfoldertype_editObject_v1_Request::OAIEzsignfoldertype_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfoldertype_editObject_v1_Request::OAIEzsignfoldertype_editObject_v1_Request() {
    this->initializeModel();
}

OAIEzsignfoldertype_editObject_v1_Request::~OAIEzsignfoldertype_editObject_v1_Request() {}

void OAIEzsignfoldertype_editObject_v1_Request::initializeModel() {

    m_obj_ezsignfoldertype_isSet = false;
    m_obj_ezsignfoldertype_isValid = false;
}

void OAIEzsignfoldertype_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfoldertype_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_ezsignfoldertype_isValid = ::OpenAPI::fromJsonValue(obj_ezsignfoldertype, json[QString("objEzsignfoldertype")]);
    m_obj_ezsignfoldertype_isSet = !json[QString("objEzsignfoldertype")].isNull() && m_obj_ezsignfoldertype_isValid;
}

QString OAIEzsignfoldertype_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfoldertype_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsignfoldertype.isSet()) {
        obj.insert(QString("objEzsignfoldertype"), ::OpenAPI::toJsonValue(obj_ezsignfoldertype));
    }
    return obj;
}

OAIEzsignfoldertype_RequestCompound OAIEzsignfoldertype_editObject_v1_Request::getObjEzsignfoldertype() const {
    return obj_ezsignfoldertype;
}
void OAIEzsignfoldertype_editObject_v1_Request::setObjEzsignfoldertype(const OAIEzsignfoldertype_RequestCompound &obj_ezsignfoldertype) {
    this->obj_ezsignfoldertype = obj_ezsignfoldertype;
    this->m_obj_ezsignfoldertype_isSet = true;
}

bool OAIEzsignfoldertype_editObject_v1_Request::is_obj_ezsignfoldertype_Set() const{
    return m_obj_ezsignfoldertype_isSet;
}

bool OAIEzsignfoldertype_editObject_v1_Request::is_obj_ezsignfoldertype_Valid() const{
    return m_obj_ezsignfoldertype_isValid;
}

bool OAIEzsignfoldertype_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsignfoldertype.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfoldertype_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsignfoldertype_isValid && true;
}

} // namespace OpenAPI
