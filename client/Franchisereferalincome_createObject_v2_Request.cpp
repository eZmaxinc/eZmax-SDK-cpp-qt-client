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

#include "Franchisereferalincome_createObject_v2_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Franchisereferalincome_createObject_v2_Request::Franchisereferalincome_createObject_v2_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Franchisereferalincome_createObject_v2_Request::Franchisereferalincome_createObject_v2_Request() {
    this->initializeModel();
}

Franchisereferalincome_createObject_v2_Request::~Franchisereferalincome_createObject_v2_Request() {}

void Franchisereferalincome_createObject_v2_Request::initializeModel() {

    m_a_obj_franchisereferalincome_isSet = false;
    m_a_obj_franchisereferalincome_isValid = false;
}

void Franchisereferalincome_createObject_v2_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Franchisereferalincome_createObject_v2_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_franchisereferalincome_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_franchisereferalincome, json[QString("a_objFranchisereferalincome")]);
    m_a_obj_franchisereferalincome_isSet = !json[QString("a_objFranchisereferalincome")].isNull() && m_a_obj_franchisereferalincome_isValid;
}

QString Franchisereferalincome_createObject_v2_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Franchisereferalincome_createObject_v2_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_franchisereferalincome.size() > 0) {
        obj.insert(QString("a_objFranchisereferalincome"), ::Ezmaxapi::toJsonValue(m_a_obj_franchisereferalincome));
    }
    return obj;
}

QList<Franchisereferalincome_RequestCompound> Franchisereferalincome_createObject_v2_Request::getAObjFranchisereferalincome() const {
    return m_a_obj_franchisereferalincome;
}
void Franchisereferalincome_createObject_v2_Request::setAObjFranchisereferalincome(const QList<Franchisereferalincome_RequestCompound> &a_obj_franchisereferalincome) {
    m_a_obj_franchisereferalincome = a_obj_franchisereferalincome;
    m_a_obj_franchisereferalincome_isSet = true;
}

bool Franchisereferalincome_createObject_v2_Request::is_a_obj_franchisereferalincome_Set() const{
    return m_a_obj_franchisereferalincome_isSet;
}

bool Franchisereferalincome_createObject_v2_Request::is_a_obj_franchisereferalincome_Valid() const{
    return m_a_obj_franchisereferalincome_isValid;
}

bool Franchisereferalincome_createObject_v2_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_franchisereferalincome.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Franchisereferalincome_createObject_v2_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_franchisereferalincome_isValid && true;
}

} // namespace Ezmaxapi