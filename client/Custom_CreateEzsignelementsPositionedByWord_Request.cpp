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

#include "Custom_CreateEzsignelementsPositionedByWord_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Custom_CreateEzsignelementsPositionedByWord_Request::Custom_CreateEzsignelementsPositionedByWord_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Custom_CreateEzsignelementsPositionedByWord_Request::Custom_CreateEzsignelementsPositionedByWord_Request() {
    this->initializeModel();
}

Custom_CreateEzsignelementsPositionedByWord_Request::~Custom_CreateEzsignelementsPositionedByWord_Request() {}

void Custom_CreateEzsignelementsPositionedByWord_Request::initializeModel() {

    m_s_createezsignelementspositionedbyword_pattern_isSet = false;
    m_s_createezsignelementspositionedbyword_pattern_isValid = false;

    m_i_createezsignelementspositionedbyword_offsetx_isSet = false;
    m_i_createezsignelementspositionedbyword_offsetx_isValid = false;

    m_i_createezsignelementspositionedbyword_offsety_isSet = false;
    m_i_createezsignelementspositionedbyword_offsety_isValid = false;

    m_e_createezsignelementspositionedbyword_occurance_isSet = false;
    m_e_createezsignelementspositionedbyword_occurance_isValid = false;
}

void Custom_CreateEzsignelementsPositionedByWord_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Custom_CreateEzsignelementsPositionedByWord_Request::fromJsonObject(QJsonObject json) {

    m_s_createezsignelementspositionedbyword_pattern_isValid = ::Ezmaxapi::fromJsonValue(m_s_createezsignelementspositionedbyword_pattern, json[QString("sCreateezsignelementspositionedbywordPattern")]);
    m_s_createezsignelementspositionedbyword_pattern_isSet = !json[QString("sCreateezsignelementspositionedbywordPattern")].isNull() && m_s_createezsignelementspositionedbyword_pattern_isValid;

    m_i_createezsignelementspositionedbyword_offsetx_isValid = ::Ezmaxapi::fromJsonValue(m_i_createezsignelementspositionedbyword_offsetx, json[QString("iCreateezsignelementspositionedbywordOffsetx")]);
    m_i_createezsignelementspositionedbyword_offsetx_isSet = !json[QString("iCreateezsignelementspositionedbywordOffsetx")].isNull() && m_i_createezsignelementspositionedbyword_offsetx_isValid;

    m_i_createezsignelementspositionedbyword_offsety_isValid = ::Ezmaxapi::fromJsonValue(m_i_createezsignelementspositionedbyword_offsety, json[QString("iCreateezsignelementspositionedbywordOffsety")]);
    m_i_createezsignelementspositionedbyword_offsety_isSet = !json[QString("iCreateezsignelementspositionedbywordOffsety")].isNull() && m_i_createezsignelementspositionedbyword_offsety_isValid;

    m_e_createezsignelementspositionedbyword_occurance_isValid = ::Ezmaxapi::fromJsonValue(m_e_createezsignelementspositionedbyword_occurance, json[QString("eCreateezsignelementspositionedbywordOccurance")]);
    m_e_createezsignelementspositionedbyword_occurance_isSet = !json[QString("eCreateezsignelementspositionedbywordOccurance")].isNull() && m_e_createezsignelementspositionedbyword_occurance_isValid;
}

QString Custom_CreateEzsignelementsPositionedByWord_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Custom_CreateEzsignelementsPositionedByWord_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_s_createezsignelementspositionedbyword_pattern_isSet) {
        obj.insert(QString("sCreateezsignelementspositionedbywordPattern"), ::Ezmaxapi::toJsonValue(m_s_createezsignelementspositionedbyword_pattern));
    }
    if (m_i_createezsignelementspositionedbyword_offsetx_isSet) {
        obj.insert(QString("iCreateezsignelementspositionedbywordOffsetx"), ::Ezmaxapi::toJsonValue(m_i_createezsignelementspositionedbyword_offsetx));
    }
    if (m_i_createezsignelementspositionedbyword_offsety_isSet) {
        obj.insert(QString("iCreateezsignelementspositionedbywordOffsety"), ::Ezmaxapi::toJsonValue(m_i_createezsignelementspositionedbyword_offsety));
    }
    if (m_e_createezsignelementspositionedbyword_occurance_isSet) {
        obj.insert(QString("eCreateezsignelementspositionedbywordOccurance"), ::Ezmaxapi::toJsonValue(m_e_createezsignelementspositionedbyword_occurance));
    }
    return obj;
}

QString Custom_CreateEzsignelementsPositionedByWord_Request::getSCreateezsignelementspositionedbywordPattern() const {
    return m_s_createezsignelementspositionedbyword_pattern;
}
void Custom_CreateEzsignelementsPositionedByWord_Request::setSCreateezsignelementspositionedbywordPattern(const QString &s_createezsignelementspositionedbyword_pattern) {
    m_s_createezsignelementspositionedbyword_pattern = s_createezsignelementspositionedbyword_pattern;
    m_s_createezsignelementspositionedbyword_pattern_isSet = true;
}

bool Custom_CreateEzsignelementsPositionedByWord_Request::is_s_createezsignelementspositionedbyword_pattern_Set() const{
    return m_s_createezsignelementspositionedbyword_pattern_isSet;
}

bool Custom_CreateEzsignelementsPositionedByWord_Request::is_s_createezsignelementspositionedbyword_pattern_Valid() const{
    return m_s_createezsignelementspositionedbyword_pattern_isValid;
}

qint32 Custom_CreateEzsignelementsPositionedByWord_Request::getICreateezsignelementspositionedbywordOffsetx() const {
    return m_i_createezsignelementspositionedbyword_offsetx;
}
void Custom_CreateEzsignelementsPositionedByWord_Request::setICreateezsignelementspositionedbywordOffsetx(const qint32 &i_createezsignelementspositionedbyword_offsetx) {
    m_i_createezsignelementspositionedbyword_offsetx = i_createezsignelementspositionedbyword_offsetx;
    m_i_createezsignelementspositionedbyword_offsetx_isSet = true;
}

bool Custom_CreateEzsignelementsPositionedByWord_Request::is_i_createezsignelementspositionedbyword_offsetx_Set() const{
    return m_i_createezsignelementspositionedbyword_offsetx_isSet;
}

bool Custom_CreateEzsignelementsPositionedByWord_Request::is_i_createezsignelementspositionedbyword_offsetx_Valid() const{
    return m_i_createezsignelementspositionedbyword_offsetx_isValid;
}

qint32 Custom_CreateEzsignelementsPositionedByWord_Request::getICreateezsignelementspositionedbywordOffsety() const {
    return m_i_createezsignelementspositionedbyword_offsety;
}
void Custom_CreateEzsignelementsPositionedByWord_Request::setICreateezsignelementspositionedbywordOffsety(const qint32 &i_createezsignelementspositionedbyword_offsety) {
    m_i_createezsignelementspositionedbyword_offsety = i_createezsignelementspositionedbyword_offsety;
    m_i_createezsignelementspositionedbyword_offsety_isSet = true;
}

bool Custom_CreateEzsignelementsPositionedByWord_Request::is_i_createezsignelementspositionedbyword_offsety_Set() const{
    return m_i_createezsignelementspositionedbyword_offsety_isSet;
}

bool Custom_CreateEzsignelementsPositionedByWord_Request::is_i_createezsignelementspositionedbyword_offsety_Valid() const{
    return m_i_createezsignelementspositionedbyword_offsety_isValid;
}

QString Custom_CreateEzsignelementsPositionedByWord_Request::getECreateezsignelementspositionedbywordOccurance() const {
    return m_e_createezsignelementspositionedbyword_occurance;
}
void Custom_CreateEzsignelementsPositionedByWord_Request::setECreateezsignelementspositionedbywordOccurance(const QString &e_createezsignelementspositionedbyword_occurance) {
    m_e_createezsignelementspositionedbyword_occurance = e_createezsignelementspositionedbyword_occurance;
    m_e_createezsignelementspositionedbyword_occurance_isSet = true;
}

bool Custom_CreateEzsignelementsPositionedByWord_Request::is_e_createezsignelementspositionedbyword_occurance_Set() const{
    return m_e_createezsignelementspositionedbyword_occurance_isSet;
}

bool Custom_CreateEzsignelementsPositionedByWord_Request::is_e_createezsignelementspositionedbyword_occurance_Valid() const{
    return m_e_createezsignelementspositionedbyword_occurance_isValid;
}

bool Custom_CreateEzsignelementsPositionedByWord_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_createezsignelementspositionedbyword_pattern_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_createezsignelementspositionedbyword_offsetx_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_createezsignelementspositionedbyword_offsety_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_createezsignelementspositionedbyword_occurance_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Custom_CreateEzsignelementsPositionedByWord_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_createezsignelementspositionedbyword_pattern_isValid && m_i_createezsignelementspositionedbyword_offsetx_isValid && m_i_createezsignelementspositionedbyword_offsety_isValid && m_e_createezsignelementspositionedbyword_occurance_isValid && true;
}

} // namespace Ezmaxapi