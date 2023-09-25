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

#include "Ezsigndocument_submitEzsignform_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigndocument_submitEzsignform_v1_Request::Ezsigndocument_submitEzsignform_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigndocument_submitEzsignform_v1_Request::Ezsigndocument_submitEzsignform_v1_Request() {
    this->initializeModel();
}

Ezsigndocument_submitEzsignform_v1_Request::~Ezsigndocument_submitEzsignform_v1_Request() {}

void Ezsigndocument_submitEzsignform_v1_Request::initializeModel() {

    m_b_ezsignform_isdraft_isSet = false;
    m_b_ezsignform_isdraft_isValid = false;

    m_a_obj_ezsignformfieldgroup_isSet = false;
    m_a_obj_ezsignformfieldgroup_isValid = false;
}

void Ezsigndocument_submitEzsignform_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigndocument_submitEzsignform_v1_Request::fromJsonObject(QJsonObject json) {

    m_b_ezsignform_isdraft_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignform_isdraft, json[QString("bEzsignformIsdraft")]);
    m_b_ezsignform_isdraft_isSet = !json[QString("bEzsignformIsdraft")].isNull() && m_b_ezsignform_isdraft_isValid;

    m_a_obj_ezsignformfieldgroup_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsignformfieldgroup, json[QString("a_objEzsignformfieldgroup")]);
    m_a_obj_ezsignformfieldgroup_isSet = !json[QString("a_objEzsignformfieldgroup")].isNull() && m_a_obj_ezsignformfieldgroup_isValid;
}

QString Ezsigndocument_submitEzsignform_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigndocument_submitEzsignform_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_b_ezsignform_isdraft_isSet) {
        obj.insert(QString("bEzsignformIsdraft"), ::Ezmaxapi::toJsonValue(m_b_ezsignform_isdraft));
    }
    if (m_a_obj_ezsignformfieldgroup.size() > 0) {
        obj.insert(QString("a_objEzsignformfieldgroup"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsignformfieldgroup));
    }
    return obj;
}

bool Ezsigndocument_submitEzsignform_v1_Request::isBEzsignformIsdraft() const {
    return m_b_ezsignform_isdraft;
}
void Ezsigndocument_submitEzsignform_v1_Request::setBEzsignformIsdraft(const bool &b_ezsignform_isdraft) {
    m_b_ezsignform_isdraft = b_ezsignform_isdraft;
    m_b_ezsignform_isdraft_isSet = true;
}

bool Ezsigndocument_submitEzsignform_v1_Request::is_b_ezsignform_isdraft_Set() const{
    return m_b_ezsignform_isdraft_isSet;
}

bool Ezsigndocument_submitEzsignform_v1_Request::is_b_ezsignform_isdraft_Valid() const{
    return m_b_ezsignform_isdraft_isValid;
}

QList<Custom_Ezsignformfieldgroup_Request> Ezsigndocument_submitEzsignform_v1_Request::getAObjEzsignformfieldgroup() const {
    return m_a_obj_ezsignformfieldgroup;
}
void Ezsigndocument_submitEzsignform_v1_Request::setAObjEzsignformfieldgroup(const QList<Custom_Ezsignformfieldgroup_Request> &a_obj_ezsignformfieldgroup) {
    m_a_obj_ezsignformfieldgroup = a_obj_ezsignformfieldgroup;
    m_a_obj_ezsignformfieldgroup_isSet = true;
}

bool Ezsigndocument_submitEzsignform_v1_Request::is_a_obj_ezsignformfieldgroup_Set() const{
    return m_a_obj_ezsignformfieldgroup_isSet;
}

bool Ezsigndocument_submitEzsignform_v1_Request::is_a_obj_ezsignformfieldgroup_Valid() const{
    return m_a_obj_ezsignformfieldgroup_isValid;
}

bool Ezsigndocument_submitEzsignform_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_b_ezsignform_isdraft_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezsignformfieldgroup.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigndocument_submitEzsignform_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_b_ezsignform_isdraft_isValid && m_a_obj_ezsignformfieldgroup_isValid && true;
}

} // namespace Ezmaxapi
