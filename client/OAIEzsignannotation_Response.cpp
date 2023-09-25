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

#include "OAIEzsignannotation_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIEzsignannotation_Response::OAIEzsignannotation_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignannotation_Response::OAIEzsignannotation_Response() {
    this->initializeModel();
}

OAIEzsignannotation_Response::~OAIEzsignannotation_Response() {}

void OAIEzsignannotation_Response::initializeModel() {

    m_pki_ezsignannotation_id_isSet = false;
    m_pki_ezsignannotation_id_isValid = false;

    m_fki_ezsigndocument_id_isSet = false;
    m_fki_ezsigndocument_id_isValid = false;

    m_e_ezsignannotation_horizontalalignment_isSet = false;
    m_e_ezsignannotation_horizontalalignment_isValid = false;

    m_e_ezsignannotation_verticalalignment_isSet = false;
    m_e_ezsignannotation_verticalalignment_isValid = false;

    m_e_ezsignannotation_type_isSet = false;
    m_e_ezsignannotation_type_isValid = false;

    m_i_ezsignannotation_x_isSet = false;
    m_i_ezsignannotation_x_isValid = false;

    m_i_ezsignannotation_y_isSet = false;
    m_i_ezsignannotation_y_isValid = false;

    m_i_ezsignannotation_width_isSet = false;
    m_i_ezsignannotation_width_isValid = false;

    m_i_ezsignannotation_height_isSet = false;
    m_i_ezsignannotation_height_isValid = false;

    m_s_ezsignannotation_text_isSet = false;
    m_s_ezsignannotation_text_isValid = false;

    m_i_ezsignpage_pagenumber_isSet = false;
    m_i_ezsignpage_pagenumber_isValid = false;
}

void OAIEzsignannotation_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignannotation_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsignannotation_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignannotation_id, json[QString("pkiEzsignannotationID")]);
    m_pki_ezsignannotation_id_isSet = !json[QString("pkiEzsignannotationID")].isNull() && m_pki_ezsignannotation_id_isValid;

    m_fki_ezsigndocument_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigndocument_id, json[QString("fkiEzsigndocumentID")]);
    m_fki_ezsigndocument_id_isSet = !json[QString("fkiEzsigndocumentID")].isNull() && m_fki_ezsigndocument_id_isValid;

    m_e_ezsignannotation_horizontalalignment_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsignannotation_horizontalalignment, json[QString("eEzsignannotationHorizontalalignment")]);
    m_e_ezsignannotation_horizontalalignment_isSet = !json[QString("eEzsignannotationHorizontalalignment")].isNull() && m_e_ezsignannotation_horizontalalignment_isValid;

    m_e_ezsignannotation_verticalalignment_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsignannotation_verticalalignment, json[QString("eEzsignannotationVerticalalignment")]);
    m_e_ezsignannotation_verticalalignment_isSet = !json[QString("eEzsignannotationVerticalalignment")].isNull() && m_e_ezsignannotation_verticalalignment_isValid;

    m_e_ezsignannotation_type_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsignannotation_type, json[QString("eEzsignannotationType")]);
    m_e_ezsignannotation_type_isSet = !json[QString("eEzsignannotationType")].isNull() && m_e_ezsignannotation_type_isValid;

    m_i_ezsignannotation_x_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignannotation_x, json[QString("iEzsignannotationX")]);
    m_i_ezsignannotation_x_isSet = !json[QString("iEzsignannotationX")].isNull() && m_i_ezsignannotation_x_isValid;

    m_i_ezsignannotation_y_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignannotation_y, json[QString("iEzsignannotationY")]);
    m_i_ezsignannotation_y_isSet = !json[QString("iEzsignannotationY")].isNull() && m_i_ezsignannotation_y_isValid;

    m_i_ezsignannotation_width_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignannotation_width, json[QString("iEzsignannotationWidth")]);
    m_i_ezsignannotation_width_isSet = !json[QString("iEzsignannotationWidth")].isNull() && m_i_ezsignannotation_width_isValid;

    m_i_ezsignannotation_height_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignannotation_height, json[QString("iEzsignannotationHeight")]);
    m_i_ezsignannotation_height_isSet = !json[QString("iEzsignannotationHeight")].isNull() && m_i_ezsignannotation_height_isValid;

    m_s_ezsignannotation_text_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignannotation_text, json[QString("sEzsignannotationText")]);
    m_s_ezsignannotation_text_isSet = !json[QString("sEzsignannotationText")].isNull() && m_s_ezsignannotation_text_isValid;

    m_i_ezsignpage_pagenumber_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignpage_pagenumber, json[QString("iEzsignpagePagenumber")]);
    m_i_ezsignpage_pagenumber_isSet = !json[QString("iEzsignpagePagenumber")].isNull() && m_i_ezsignpage_pagenumber_isValid;
}

QString OAIEzsignannotation_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignannotation_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignannotation_id_isSet) {
        obj.insert(QString("pkiEzsignannotationID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignannotation_id));
    }
    if (m_fki_ezsigndocument_id_isSet) {
        obj.insert(QString("fkiEzsigndocumentID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigndocument_id));
    }
    if (m_e_ezsignannotation_horizontalalignment.isSet()) {
        obj.insert(QString("eEzsignannotationHorizontalalignment"), ::Ezmaxapi::toJsonValue(m_e_ezsignannotation_horizontalalignment));
    }
    if (m_e_ezsignannotation_verticalalignment.isSet()) {
        obj.insert(QString("eEzsignannotationVerticalalignment"), ::Ezmaxapi::toJsonValue(m_e_ezsignannotation_verticalalignment));
    }
    if (m_e_ezsignannotation_type.isSet()) {
        obj.insert(QString("eEzsignannotationType"), ::Ezmaxapi::toJsonValue(m_e_ezsignannotation_type));
    }
    if (m_i_ezsignannotation_x_isSet) {
        obj.insert(QString("iEzsignannotationX"), ::Ezmaxapi::toJsonValue(m_i_ezsignannotation_x));
    }
    if (m_i_ezsignannotation_y_isSet) {
        obj.insert(QString("iEzsignannotationY"), ::Ezmaxapi::toJsonValue(m_i_ezsignannotation_y));
    }
    if (m_i_ezsignannotation_width_isSet) {
        obj.insert(QString("iEzsignannotationWidth"), ::Ezmaxapi::toJsonValue(m_i_ezsignannotation_width));
    }
    if (m_i_ezsignannotation_height_isSet) {
        obj.insert(QString("iEzsignannotationHeight"), ::Ezmaxapi::toJsonValue(m_i_ezsignannotation_height));
    }
    if (m_s_ezsignannotation_text_isSet) {
        obj.insert(QString("sEzsignannotationText"), ::Ezmaxapi::toJsonValue(m_s_ezsignannotation_text));
    }
    if (m_i_ezsignpage_pagenumber_isSet) {
        obj.insert(QString("iEzsignpagePagenumber"), ::Ezmaxapi::toJsonValue(m_i_ezsignpage_pagenumber));
    }
    return obj;
}

qint32 OAIEzsignannotation_Response::getPkiEzsignannotationId() const {
    return m_pki_ezsignannotation_id;
}
void OAIEzsignannotation_Response::setPkiEzsignannotationId(const qint32 &pki_ezsignannotation_id) {
    m_pki_ezsignannotation_id = pki_ezsignannotation_id;
    m_pki_ezsignannotation_id_isSet = true;
}

bool OAIEzsignannotation_Response::is_pki_ezsignannotation_id_Set() const{
    return m_pki_ezsignannotation_id_isSet;
}

bool OAIEzsignannotation_Response::is_pki_ezsignannotation_id_Valid() const{
    return m_pki_ezsignannotation_id_isValid;
}

qint32 OAIEzsignannotation_Response::getFkiEzsigndocumentId() const {
    return m_fki_ezsigndocument_id;
}
void OAIEzsignannotation_Response::setFkiEzsigndocumentId(const qint32 &fki_ezsigndocument_id) {
    m_fki_ezsigndocument_id = fki_ezsigndocument_id;
    m_fki_ezsigndocument_id_isSet = true;
}

bool OAIEzsignannotation_Response::is_fki_ezsigndocument_id_Set() const{
    return m_fki_ezsigndocument_id_isSet;
}

bool OAIEzsignannotation_Response::is_fki_ezsigndocument_id_Valid() const{
    return m_fki_ezsigndocument_id_isValid;
}

OAIEnum_Horizontalalignment OAIEzsignannotation_Response::getEEzsignannotationHorizontalalignment() const {
    return m_e_ezsignannotation_horizontalalignment;
}
void OAIEzsignannotation_Response::setEEzsignannotationHorizontalalignment(const OAIEnum_Horizontalalignment &e_ezsignannotation_horizontalalignment) {
    m_e_ezsignannotation_horizontalalignment = e_ezsignannotation_horizontalalignment;
    m_e_ezsignannotation_horizontalalignment_isSet = true;
}

bool OAIEzsignannotation_Response::is_e_ezsignannotation_horizontalalignment_Set() const{
    return m_e_ezsignannotation_horizontalalignment_isSet;
}

bool OAIEzsignannotation_Response::is_e_ezsignannotation_horizontalalignment_Valid() const{
    return m_e_ezsignannotation_horizontalalignment_isValid;
}

OAIEnum_Verticalalignment OAIEzsignannotation_Response::getEEzsignannotationVerticalalignment() const {
    return m_e_ezsignannotation_verticalalignment;
}
void OAIEzsignannotation_Response::setEEzsignannotationVerticalalignment(const OAIEnum_Verticalalignment &e_ezsignannotation_verticalalignment) {
    m_e_ezsignannotation_verticalalignment = e_ezsignannotation_verticalalignment;
    m_e_ezsignannotation_verticalalignment_isSet = true;
}

bool OAIEzsignannotation_Response::is_e_ezsignannotation_verticalalignment_Set() const{
    return m_e_ezsignannotation_verticalalignment_isSet;
}

bool OAIEzsignannotation_Response::is_e_ezsignannotation_verticalalignment_Valid() const{
    return m_e_ezsignannotation_verticalalignment_isValid;
}

OAIField_eEzsignannotationType OAIEzsignannotation_Response::getEEzsignannotationType() const {
    return m_e_ezsignannotation_type;
}
void OAIEzsignannotation_Response::setEEzsignannotationType(const OAIField_eEzsignannotationType &e_ezsignannotation_type) {
    m_e_ezsignannotation_type = e_ezsignannotation_type;
    m_e_ezsignannotation_type_isSet = true;
}

bool OAIEzsignannotation_Response::is_e_ezsignannotation_type_Set() const{
    return m_e_ezsignannotation_type_isSet;
}

bool OAIEzsignannotation_Response::is_e_ezsignannotation_type_Valid() const{
    return m_e_ezsignannotation_type_isValid;
}

qint32 OAIEzsignannotation_Response::getIEzsignannotationX() const {
    return m_i_ezsignannotation_x;
}
void OAIEzsignannotation_Response::setIEzsignannotationX(const qint32 &i_ezsignannotation_x) {
    m_i_ezsignannotation_x = i_ezsignannotation_x;
    m_i_ezsignannotation_x_isSet = true;
}

bool OAIEzsignannotation_Response::is_i_ezsignannotation_x_Set() const{
    return m_i_ezsignannotation_x_isSet;
}

bool OAIEzsignannotation_Response::is_i_ezsignannotation_x_Valid() const{
    return m_i_ezsignannotation_x_isValid;
}

qint32 OAIEzsignannotation_Response::getIEzsignannotationY() const {
    return m_i_ezsignannotation_y;
}
void OAIEzsignannotation_Response::setIEzsignannotationY(const qint32 &i_ezsignannotation_y) {
    m_i_ezsignannotation_y = i_ezsignannotation_y;
    m_i_ezsignannotation_y_isSet = true;
}

bool OAIEzsignannotation_Response::is_i_ezsignannotation_y_Set() const{
    return m_i_ezsignannotation_y_isSet;
}

bool OAIEzsignannotation_Response::is_i_ezsignannotation_y_Valid() const{
    return m_i_ezsignannotation_y_isValid;
}

qint32 OAIEzsignannotation_Response::getIEzsignannotationWidth() const {
    return m_i_ezsignannotation_width;
}
void OAIEzsignannotation_Response::setIEzsignannotationWidth(const qint32 &i_ezsignannotation_width) {
    m_i_ezsignannotation_width = i_ezsignannotation_width;
    m_i_ezsignannotation_width_isSet = true;
}

bool OAIEzsignannotation_Response::is_i_ezsignannotation_width_Set() const{
    return m_i_ezsignannotation_width_isSet;
}

bool OAIEzsignannotation_Response::is_i_ezsignannotation_width_Valid() const{
    return m_i_ezsignannotation_width_isValid;
}

qint32 OAIEzsignannotation_Response::getIEzsignannotationHeight() const {
    return m_i_ezsignannotation_height;
}
void OAIEzsignannotation_Response::setIEzsignannotationHeight(const qint32 &i_ezsignannotation_height) {
    m_i_ezsignannotation_height = i_ezsignannotation_height;
    m_i_ezsignannotation_height_isSet = true;
}

bool OAIEzsignannotation_Response::is_i_ezsignannotation_height_Set() const{
    return m_i_ezsignannotation_height_isSet;
}

bool OAIEzsignannotation_Response::is_i_ezsignannotation_height_Valid() const{
    return m_i_ezsignannotation_height_isValid;
}

QString OAIEzsignannotation_Response::getSEzsignannotationText() const {
    return m_s_ezsignannotation_text;
}
void OAIEzsignannotation_Response::setSEzsignannotationText(const QString &s_ezsignannotation_text) {
    m_s_ezsignannotation_text = s_ezsignannotation_text;
    m_s_ezsignannotation_text_isSet = true;
}

bool OAIEzsignannotation_Response::is_s_ezsignannotation_text_Set() const{
    return m_s_ezsignannotation_text_isSet;
}

bool OAIEzsignannotation_Response::is_s_ezsignannotation_text_Valid() const{
    return m_s_ezsignannotation_text_isValid;
}

qint32 OAIEzsignannotation_Response::getIEzsignpagePagenumber() const {
    return m_i_ezsignpage_pagenumber;
}
void OAIEzsignannotation_Response::setIEzsignpagePagenumber(const qint32 &i_ezsignpage_pagenumber) {
    m_i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    m_i_ezsignpage_pagenumber_isSet = true;
}

bool OAIEzsignannotation_Response::is_i_ezsignpage_pagenumber_Set() const{
    return m_i_ezsignpage_pagenumber_isSet;
}

bool OAIEzsignannotation_Response::is_i_ezsignpage_pagenumber_Valid() const{
    return m_i_ezsignpage_pagenumber_isValid;
}

bool OAIEzsignannotation_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignannotation_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigndocument_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsignannotation_horizontalalignment.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsignannotation_verticalalignment.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsignannotation_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignannotation_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignannotation_y_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignannotation_width_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignannotation_height_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignannotation_text_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignpage_pagenumber_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignannotation_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignannotation_id_isValid && m_fki_ezsigndocument_id_isValid && m_e_ezsignannotation_type_isValid && m_i_ezsignannotation_x_isValid && m_i_ezsignannotation_y_isValid && m_i_ezsignpage_pagenumber_isValid && true;
}

} // namespace Ezmaxapi
