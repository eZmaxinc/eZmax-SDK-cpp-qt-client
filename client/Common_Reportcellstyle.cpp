/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Common_Reportcellstyle.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Common_Reportcellstyle::Common_Reportcellstyle(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Common_Reportcellstyle::Common_Reportcellstyle() {
    this->initializeModel();
}

Common_Reportcellstyle::~Common_Reportcellstyle() {}

void Common_Reportcellstyle::initializeModel() {

    m_b_reportcellstyle_bordertop_isSet = false;
    m_b_reportcellstyle_bordertop_isValid = false;

    m_b_reportcellstyle_borderbottom_isSet = false;
    m_b_reportcellstyle_borderbottom_isValid = false;

    m_b_reportcellstyle_borderleft_isSet = false;
    m_b_reportcellstyle_borderleft_isValid = false;

    m_b_reportcellstyle_borderright_isSet = false;
    m_b_reportcellstyle_borderright_isValid = false;

    m_e_reportcell_horizontalalignment_isSet = false;
    m_e_reportcell_horizontalalignment_isValid = false;

    m_e_reportcell_verticalalignment_isSet = false;
    m_e_reportcell_verticalalignment_isValid = false;

    m_e_reportcell_fontweight_isSet = false;
    m_e_reportcell_fontweight_isValid = false;

    m_e_reportcell_fontunderline_isSet = false;
    m_e_reportcell_fontunderline_isValid = false;
}

void Common_Reportcellstyle::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Common_Reportcellstyle::fromJsonObject(QJsonObject json) {

    m_b_reportcellstyle_bordertop_isValid = ::Ezmaxapi::fromJsonValue(m_b_reportcellstyle_bordertop, json[QString("bReportcellstyleBordertop")]);
    m_b_reportcellstyle_bordertop_isSet = !json[QString("bReportcellstyleBordertop")].isNull() && m_b_reportcellstyle_bordertop_isValid;

    m_b_reportcellstyle_borderbottom_isValid = ::Ezmaxapi::fromJsonValue(m_b_reportcellstyle_borderbottom, json[QString("bReportcellstyleBorderbottom")]);
    m_b_reportcellstyle_borderbottom_isSet = !json[QString("bReportcellstyleBorderbottom")].isNull() && m_b_reportcellstyle_borderbottom_isValid;

    m_b_reportcellstyle_borderleft_isValid = ::Ezmaxapi::fromJsonValue(m_b_reportcellstyle_borderleft, json[QString("bReportcellstyleBorderleft")]);
    m_b_reportcellstyle_borderleft_isSet = !json[QString("bReportcellstyleBorderleft")].isNull() && m_b_reportcellstyle_borderleft_isValid;

    m_b_reportcellstyle_borderright_isValid = ::Ezmaxapi::fromJsonValue(m_b_reportcellstyle_borderright, json[QString("bReportcellstyleBorderright")]);
    m_b_reportcellstyle_borderright_isSet = !json[QString("bReportcellstyleBorderright")].isNull() && m_b_reportcellstyle_borderright_isValid;

    m_e_reportcell_horizontalalignment_isValid = ::Ezmaxapi::fromJsonValue(m_e_reportcell_horizontalalignment, json[QString("eReportcellHorizontalalignment")]);
    m_e_reportcell_horizontalalignment_isSet = !json[QString("eReportcellHorizontalalignment")].isNull() && m_e_reportcell_horizontalalignment_isValid;

    m_e_reportcell_verticalalignment_isValid = ::Ezmaxapi::fromJsonValue(m_e_reportcell_verticalalignment, json[QString("eReportcellVerticalalignment")]);
    m_e_reportcell_verticalalignment_isSet = !json[QString("eReportcellVerticalalignment")].isNull() && m_e_reportcell_verticalalignment_isValid;

    m_e_reportcell_fontweight_isValid = ::Ezmaxapi::fromJsonValue(m_e_reportcell_fontweight, json[QString("eReportcellFontweight")]);
    m_e_reportcell_fontweight_isSet = !json[QString("eReportcellFontweight")].isNull() && m_e_reportcell_fontweight_isValid;

    m_e_reportcell_fontunderline_isValid = ::Ezmaxapi::fromJsonValue(m_e_reportcell_fontunderline, json[QString("eReportcellFontunderline")]);
    m_e_reportcell_fontunderline_isSet = !json[QString("eReportcellFontunderline")].isNull() && m_e_reportcell_fontunderline_isValid;
}

QString Common_Reportcellstyle::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Common_Reportcellstyle::asJsonObject() const {
    QJsonObject obj;
    if (m_b_reportcellstyle_bordertop_isSet) {
        obj.insert(QString("bReportcellstyleBordertop"), ::Ezmaxapi::toJsonValue(m_b_reportcellstyle_bordertop));
    }
    if (m_b_reportcellstyle_borderbottom_isSet) {
        obj.insert(QString("bReportcellstyleBorderbottom"), ::Ezmaxapi::toJsonValue(m_b_reportcellstyle_borderbottom));
    }
    if (m_b_reportcellstyle_borderleft_isSet) {
        obj.insert(QString("bReportcellstyleBorderleft"), ::Ezmaxapi::toJsonValue(m_b_reportcellstyle_borderleft));
    }
    if (m_b_reportcellstyle_borderright_isSet) {
        obj.insert(QString("bReportcellstyleBorderright"), ::Ezmaxapi::toJsonValue(m_b_reportcellstyle_borderright));
    }
    if (m_e_reportcell_horizontalalignment.isSet()) {
        obj.insert(QString("eReportcellHorizontalalignment"), ::Ezmaxapi::toJsonValue(m_e_reportcell_horizontalalignment));
    }
    if (m_e_reportcell_verticalalignment.isSet()) {
        obj.insert(QString("eReportcellVerticalalignment"), ::Ezmaxapi::toJsonValue(m_e_reportcell_verticalalignment));
    }
    if (m_e_reportcell_fontweight.isSet()) {
        obj.insert(QString("eReportcellFontweight"), ::Ezmaxapi::toJsonValue(m_e_reportcell_fontweight));
    }
    if (m_e_reportcell_fontunderline.isSet()) {
        obj.insert(QString("eReportcellFontunderline"), ::Ezmaxapi::toJsonValue(m_e_reportcell_fontunderline));
    }
    return obj;
}

bool Common_Reportcellstyle::isBReportcellstyleBordertop() const {
    return m_b_reportcellstyle_bordertop;
}
void Common_Reportcellstyle::setBReportcellstyleBordertop(const bool &b_reportcellstyle_bordertop) {
    m_b_reportcellstyle_bordertop = b_reportcellstyle_bordertop;
    m_b_reportcellstyle_bordertop_isSet = true;
}

bool Common_Reportcellstyle::is_b_reportcellstyle_bordertop_Set() const{
    return m_b_reportcellstyle_bordertop_isSet;
}

bool Common_Reportcellstyle::is_b_reportcellstyle_bordertop_Valid() const{
    return m_b_reportcellstyle_bordertop_isValid;
}

bool Common_Reportcellstyle::isBReportcellstyleBorderbottom() const {
    return m_b_reportcellstyle_borderbottom;
}
void Common_Reportcellstyle::setBReportcellstyleBorderbottom(const bool &b_reportcellstyle_borderbottom) {
    m_b_reportcellstyle_borderbottom = b_reportcellstyle_borderbottom;
    m_b_reportcellstyle_borderbottom_isSet = true;
}

bool Common_Reportcellstyle::is_b_reportcellstyle_borderbottom_Set() const{
    return m_b_reportcellstyle_borderbottom_isSet;
}

bool Common_Reportcellstyle::is_b_reportcellstyle_borderbottom_Valid() const{
    return m_b_reportcellstyle_borderbottom_isValid;
}

bool Common_Reportcellstyle::isBReportcellstyleBorderleft() const {
    return m_b_reportcellstyle_borderleft;
}
void Common_Reportcellstyle::setBReportcellstyleBorderleft(const bool &b_reportcellstyle_borderleft) {
    m_b_reportcellstyle_borderleft = b_reportcellstyle_borderleft;
    m_b_reportcellstyle_borderleft_isSet = true;
}

bool Common_Reportcellstyle::is_b_reportcellstyle_borderleft_Set() const{
    return m_b_reportcellstyle_borderleft_isSet;
}

bool Common_Reportcellstyle::is_b_reportcellstyle_borderleft_Valid() const{
    return m_b_reportcellstyle_borderleft_isValid;
}

bool Common_Reportcellstyle::isBReportcellstyleBorderright() const {
    return m_b_reportcellstyle_borderright;
}
void Common_Reportcellstyle::setBReportcellstyleBorderright(const bool &b_reportcellstyle_borderright) {
    m_b_reportcellstyle_borderright = b_reportcellstyle_borderright;
    m_b_reportcellstyle_borderright_isSet = true;
}

bool Common_Reportcellstyle::is_b_reportcellstyle_borderright_Set() const{
    return m_b_reportcellstyle_borderright_isSet;
}

bool Common_Reportcellstyle::is_b_reportcellstyle_borderright_Valid() const{
    return m_b_reportcellstyle_borderright_isValid;
}

Enum_Horizontalalignment Common_Reportcellstyle::getEReportcellHorizontalalignment() const {
    return m_e_reportcell_horizontalalignment;
}
void Common_Reportcellstyle::setEReportcellHorizontalalignment(const Enum_Horizontalalignment &e_reportcell_horizontalalignment) {
    m_e_reportcell_horizontalalignment = e_reportcell_horizontalalignment;
    m_e_reportcell_horizontalalignment_isSet = true;
}

bool Common_Reportcellstyle::is_e_reportcell_horizontalalignment_Set() const{
    return m_e_reportcell_horizontalalignment_isSet;
}

bool Common_Reportcellstyle::is_e_reportcell_horizontalalignment_Valid() const{
    return m_e_reportcell_horizontalalignment_isValid;
}

Enum_Verticalalignment Common_Reportcellstyle::getEReportcellVerticalalignment() const {
    return m_e_reportcell_verticalalignment;
}
void Common_Reportcellstyle::setEReportcellVerticalalignment(const Enum_Verticalalignment &e_reportcell_verticalalignment) {
    m_e_reportcell_verticalalignment = e_reportcell_verticalalignment;
    m_e_reportcell_verticalalignment_isSet = true;
}

bool Common_Reportcellstyle::is_e_reportcell_verticalalignment_Set() const{
    return m_e_reportcell_verticalalignment_isSet;
}

bool Common_Reportcellstyle::is_e_reportcell_verticalalignment_Valid() const{
    return m_e_reportcell_verticalalignment_isValid;
}

Enum_Fontweight Common_Reportcellstyle::getEReportcellFontweight() const {
    return m_e_reportcell_fontweight;
}
void Common_Reportcellstyle::setEReportcellFontweight(const Enum_Fontweight &e_reportcell_fontweight) {
    m_e_reportcell_fontweight = e_reportcell_fontweight;
    m_e_reportcell_fontweight_isSet = true;
}

bool Common_Reportcellstyle::is_e_reportcell_fontweight_Set() const{
    return m_e_reportcell_fontweight_isSet;
}

bool Common_Reportcellstyle::is_e_reportcell_fontweight_Valid() const{
    return m_e_reportcell_fontweight_isValid;
}

Enum_Fontunderline Common_Reportcellstyle::getEReportcellFontunderline() const {
    return m_e_reportcell_fontunderline;
}
void Common_Reportcellstyle::setEReportcellFontunderline(const Enum_Fontunderline &e_reportcell_fontunderline) {
    m_e_reportcell_fontunderline = e_reportcell_fontunderline;
    m_e_reportcell_fontunderline_isSet = true;
}

bool Common_Reportcellstyle::is_e_reportcell_fontunderline_Set() const{
    return m_e_reportcell_fontunderline_isSet;
}

bool Common_Reportcellstyle::is_e_reportcell_fontunderline_Valid() const{
    return m_e_reportcell_fontunderline_isValid;
}

bool Common_Reportcellstyle::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_b_reportcellstyle_bordertop_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_reportcellstyle_borderbottom_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_reportcellstyle_borderleft_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_reportcellstyle_borderright_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_reportcell_horizontalalignment.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_reportcell_verticalalignment.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_reportcell_fontweight.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_reportcell_fontunderline.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Common_Reportcellstyle::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_b_reportcellstyle_bordertop_isValid && m_b_reportcellstyle_borderbottom_isValid && m_b_reportcellstyle_borderleft_isValid && m_b_reportcellstyle_borderright_isValid && m_e_reportcell_horizontalalignment_isValid && m_e_reportcell_verticalalignment_isValid && m_e_reportcell_fontweight_isValid && m_e_reportcell_fontunderline_isValid && true;
}

} // namespace Ezmaxapi
