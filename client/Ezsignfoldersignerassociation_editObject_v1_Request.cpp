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

#include "Ezsignfoldersignerassociation_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignfoldersignerassociation_editObject_v1_Request::Ezsignfoldersignerassociation_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignfoldersignerassociation_editObject_v1_Request::Ezsignfoldersignerassociation_editObject_v1_Request() {
    this->initializeModel();
}

Ezsignfoldersignerassociation_editObject_v1_Request::~Ezsignfoldersignerassociation_editObject_v1_Request() {}

void Ezsignfoldersignerassociation_editObject_v1_Request::initializeModel() {

    m_obj_ezsignfoldersignerassociation_isSet = false;
    m_obj_ezsignfoldersignerassociation_isValid = false;
}

void Ezsignfoldersignerassociation_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignfoldersignerassociation_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_ezsignfoldersignerassociation_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsignfoldersignerassociation, json[QString("objEzsignfoldersignerassociation")]);
    m_obj_ezsignfoldersignerassociation_isSet = !json[QString("objEzsignfoldersignerassociation")].isNull() && m_obj_ezsignfoldersignerassociation_isValid;
}

QString Ezsignfoldersignerassociation_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignfoldersignerassociation_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_ezsignfoldersignerassociation.isSet()) {
        obj.insert(QString("objEzsignfoldersignerassociation"), ::Ezmaxapi::toJsonValue(m_obj_ezsignfoldersignerassociation));
    }
    return obj;
}

Ezsignfoldersignerassociation_RequestCompound Ezsignfoldersignerassociation_editObject_v1_Request::getObjEzsignfoldersignerassociation() const {
    return m_obj_ezsignfoldersignerassociation;
}
void Ezsignfoldersignerassociation_editObject_v1_Request::setObjEzsignfoldersignerassociation(const Ezsignfoldersignerassociation_RequestCompound &obj_ezsignfoldersignerassociation) {
    m_obj_ezsignfoldersignerassociation = obj_ezsignfoldersignerassociation;
    m_obj_ezsignfoldersignerassociation_isSet = true;
}

bool Ezsignfoldersignerassociation_editObject_v1_Request::is_obj_ezsignfoldersignerassociation_Set() const{
    return m_obj_ezsignfoldersignerassociation_isSet;
}

bool Ezsignfoldersignerassociation_editObject_v1_Request::is_obj_ezsignfoldersignerassociation_Valid() const{
    return m_obj_ezsignfoldersignerassociation_isValid;
}

bool Ezsignfoldersignerassociation_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_ezsignfoldersignerassociation.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignfoldersignerassociation_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsignfoldersignerassociation_isValid && true;
}

} // namespace Ezmaxapi
